function submitHelp() {
    var name = document.getElementById("name").value;
    var issue = document.getElementById("issue").value;

    if (name == "" || issue == "") {
        alert("Please fill all fields");
        return;
    }

    document.getElementById("result").innerHTML =
        "Thank you " + name + ". Your complaint has been submitted.";
}
