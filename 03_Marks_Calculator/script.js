function calculateMarks() {
    var m1 = Number(document.getElementById("m1").value);
    var m2 = Number(document.getElementById("m2").value);
    var m3 = Number(document.getElementById("m3").value);

    var total = m1 + m2 + m3;
    var percentage = total / 3;
    var grade;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";

    document.getElementById("result").innerHTML =
        "Total Marks: " + total +
        "<br>Percentage: " + percentage.toFixed(2) +
        "%<br>Grade: " + grade;
}
