function registerStudent() {
    var name = document.getElementById("name").value;
    var roll = document.getElementById("roll").value;
    var course = document.getElementById("course").value;

    if (name == "" || roll == "" || course == "") {
        alert("Please fill all fields");
        return false;
    }

    alert("Student Registered Successfully!");
    return true;
}
