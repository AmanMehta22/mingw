function validatePassword() {
    var password = document.getElementById("password").value;
    var message = document.getElementById("message");

    if (password.length < 8) {
        message.innerHTML = "Password must contain at least 8 characters";
        return;
    }

    if (!/[A-Z]/.test(password)) {
        message.innerHTML = "Password must contain an uppercase letter";
        return;
    }

    if (!/[0-9]/.test(password)) {
        message.innerHTML = "Password must contain a number";
        return;
    }

    message.innerHTML = "Strong Password!";
}
