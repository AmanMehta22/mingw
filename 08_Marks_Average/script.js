function calculateAverage() {
    var m1 = Number(document.getElementById("m1").value);
    var m2 = Number(document.getElementById("m2").value);
    var m3 = Number(document.getElementById("m3").value);
    var m4 = Number(document.getElementById("m4").value);

    var average = (m1 + m2 + m3 + m4) / 4;

    document.getElementById("result").innerHTML =
        "Average Marks: " + average.toFixed(2);
}
