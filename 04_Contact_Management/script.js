function addContact() {
    var name = document.getElementById("name").value;
    var phone = document.getElementById("phone").value;

    if (name == "" || phone == "") {
        alert("Please enter name and phone number");
        return;
    }

    var list = document.getElementById("contactList");
    var item = document.createElement("li");

    item.innerHTML = name + " - " + phone;
    list.appendChild(item);

    document.getElementById("name").value = "";
    document.getElementById("phone").value = "";
}
