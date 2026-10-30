var correctAnswer = "B";

document.getElementById("question").innerHTML =
    "Which language is used to style a web page?";

document.getElementById("optionA").innerHTML = "Java";
document.getElementById("optionB").innerHTML = "CSS";
document.getElementById("optionC").innerHTML = "Python";
document.getElementById("optionD").innerHTML = "C";

function checkAnswer() {
    var answer = document.querySelector(
        'input[name="answer"]:checked'
    );

    if (answer == null) {
        alert("Please select an answer");
        return;
    }

    if (answer.value == correctAnswer) {
        document.getElementById("result").innerHTML =
            "Correct Answer!";
    } else {
        document.getElementById("result").innerHTML =
            "Wrong Answer!";
    }
}
