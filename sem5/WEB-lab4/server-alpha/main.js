// @flow

const express = require('express');
const path = require('path');
const bodyParser = require('body-parser');
const fs = require('fs');
const https = require('https');
const domain = require('domain');

const log = require('./logger');

const privateKey = fs.readFileSync(path.join(__dirname, "../keys/server.key"));
const certificate = fs.readFileSync(path.join(__dirname, "../keys/server.crt"));
const app = express();

app.use(express.static(path.join(__dirname, "../public-alpha")));
app.set("view engine", "pug");
app.set("views", "./views-alpha");

app.use(bodyParser.urlencoded({extended: true}));
app.use(bodyParser.json());

const server = express.Router();

server.use((req, res, next) => {
    log.logger.http("Called " + req.url + " with method " + req.method + " at " +
        (new Date()).toLocaleDateString("ru") + " " + (new Date()).toLocaleTimeString("ru") +
        " processing...");
    return next();
});

const api = require('./api');
api.configure(server);
const auth = require('./auth');
auth.configure(server);
const routes = require('./routs');
routes.configure(server);

app.use("/", server);

const d = domain.create();
d.on("error", (e) => {
    log.logger.error("Домен перехватил ошибку " + e);
});
d.run(() => {
    const httpsServer = https.createServer({key: privateKey, cert: certificate}, app);
    const trade = require('./trade');
    trade.setup_io(httpsServer);
    httpsServer.listen(8081, () => {
        log.logger.info("Server started at: https://localhost:8081/");
    });
});
