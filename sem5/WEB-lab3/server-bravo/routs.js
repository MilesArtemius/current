module.exports.configure = function (server) {
    const library = require('./library');
    const population = require('./population');
    const settings = require('./settings');



    server.use((req, res, next) => {
        if (req.user) {
            if (req.url !== "/login") return next();
            else return res.redirect("/");
        } else {
            if (req.url === "/login") return next();
            else return res.redirect("/login");
        }
    });



    server.get("/login", (req, res) => {
        return res.render("login");
    });

    server.get("/book", (req, res) => {
        const code = req.query["code"] ? Number.parseInt(req.query["code"]) : undefined;
        if (code === undefined) return res.render("404", {cause: "Неверный запрос."});

        const book = library.get_book(code);
        if (!book) return res.render("404", {cause: "Книга с кодом " + code + " не существует."});

        return res.render("book", {
            holder: req.user.name,
            is_admin: req.user.is_admin,

            book_code: book.code,
            book_name: book.name,
            book_cover: book.cover,
            book_part: book.part,
            book_author: book.author,
            book_description: book.description,
            book_publication: book.publication
        });
    });

    server.get("/users", (req, res) => {
        return res.render("users", {
            is_admin: req.user.is_admin,
            users: population.get_users()
        });
    });

    server.get("/settings", (req, res) => {
        return res.render("settings", {
            settings: settings.read_settings()
        });
    });

    server.get("/", (req, res) => {
        return res.render("lib", {
            user_name: req.user.name,
            is_admin: req.user.is_admin,
            user_part: population.get_user(req.user.name).part,
            user_money: population.get_user(req.user.name).money,
            all_books: library.get_books_sorted(req.query.filter)
        });
    });

    server.get("*", (req, res) => {
        return res.render("404", {cause: "Страница не найдена!"});
    });
}
