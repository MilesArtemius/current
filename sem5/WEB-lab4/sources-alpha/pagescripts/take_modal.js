import {take_book, assemble_participation} from "../scripts/book_manager"
import {get_params, collect_values_if_possible} from "../scripts/general"

window.on_modal_take = function () {
    const params = collect_values_if_possible("min_step_input", "max_step_input", "start_cost_input");
    if (params) {
        const part = assemble_participation(params["min_step_input"], params["max_step_input"], params["start_cost_input"]);
        if (!part) alert("Min step should be less than max!");
        else take_book(get_params("code"), part, () => {
            window.location = window.location.href;
        });
    }
}
