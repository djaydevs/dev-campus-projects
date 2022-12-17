//CRUD
var row = null;
//ADD BUTTON
function Add() {
    var  detailsEntered = retrieveDetails();
    var readDetails= readingDetailsFromLocalStorage(detailsEntered);

    if(detailsEntered == false){
        alert("Pleaser enter your details");
    } else {
        if(row == null){
            insert(readDetails);
            alert("Record Added");
        }
        else{
            update();
            alert("Record Updated");
        }
    }
    document.getElementById("form").reset();
}

function retrieveDetails() {
    var snum = document.getElementById("studNum").value;
    var lname = document.getElementById("lName").value;
    var fname = document.getElementById("fName").value;
    var middle = document.getElementById("initial").value;
    var a = document.getElementById("age").value;
    var s = document.querySelector(`input[name = "sex"]:checked`).value;
    var ys = document.getElementById("yearSection").value;
    var crs = document.getElementById("course").value;
 
     
     var arr = [snum, lname, fname, middle, a, s, ys, crs];
     if(arr.includes("")){
         return false
     }else {
         return arr;}
 }
 //READ
 function readingDetailsFromLocalStorage(detailsEntered) {
 
     var snum2 = localStorage.setItem("StudentNumber", detailsEntered[0]);
     var lname2 = localStorage.setItem("LastName", detailsEntered[1]);
     var fname2 = localStorage.setItem("FirstName", detailsEntered[2]);
     var middle2 = localStorage.setItem("MiddleInitial", detailsEntered[3]);
     var a2 = localStorage.setItem("Age", detailsEntered[4]);
     var s2 = localStorage.setItem("Sex", detailsEntered[5]);
     var ys2 = localStorage.setItem("YearSection", detailsEntered[6]);
     var crs2 = localStorage.setItem("Course", detailsEntered[7]);
    
     
     //getting values from localstorage to table
 
     var getSnum = localStorage.getItem("StudentNumber", snum2);
     var getLname = localStorage.getItem("LastName",lname2);
     var getFname = localStorage.getItem("FirstName", fname2);
     var getMiddle = localStorage.getItem("MiddleInitial", middle2);
     var getAge = localStorage.getItem("Age", a2);
     var getSex = localStorage.getItem("Sex", s2);
     var getYs = localStorage.getItem("YearSection", ys2);
     var getCourse = localStorage.getItem("Course", crs2);
     
 
     var arr = [getSnum, getLname, getFname, getMiddle, getAge, getSex, getYs, getCourse];
     return arr;
 }
 
 //INSERT DATA IN TABLE
 function insert(readDetails) {
 
     var row = table.insertRow();
     row.insertCell(0).innerHTML = readDetails[0];
     row.insertCell(1).innerHTML = readDetails[1];
     row.insertCell(2).innerHTML = readDetails[2];
     row.insertCell(3).innerHTML = readDetails[3];
     row.insertCell(4).innerHTML = readDetails[4];
     row.insertCell(5).innerHTML = readDetails[5];
     row.insertCell(6).innerHTML = readDetails[6];
     row.insertCell(7).innerHTML = readDetails[7];
     row.insertCell(8).innerHTML = `<button class="btnEdit" onclick = edit(this)>Edit</button>
     <button class="btnDelete" onclick = remove(this)>Delete</button>`
 
 }

 //EDIT DETAILS
function edit(th) {
    row = th.parentElement.parentElement;
    document.getElementById("studNum").value = row.cells[0].innerHTML;
    document.getElementById("lName").value = row.cells[1].innerHTML;
    document.getElementById("fName").value = row.cells[2].innerHTML;
    document.getElementById("initial").value = row.cells[3].innerHTML;
    document.getElementById("age").value = row.cells[4].innerHTML;
    document.getElementById("yearSection").value = row.cells[6].innerHTML;
    document.querySelector(`input[name = "sex"]:checked`).value = row.cells[5].innerHTML;
    document.getElementById("course").value = row.cells[7].innerHTML;

}

//UPDATE DETAILS
function update(th) {
    row.cells[0].innerHTML = document.getElementById("studNum").value;
    row.cells[1].innerHTML = document.getElementById("fName").value;
    row.cells[2].innerHTML = document.getElementById("lName").value;
    row.cells[3].innerHTML = document.getElementById("initial").value;
    row.cells[4].innerHTML = document.getElementById("age").value;
    row.cells[6].innerHTML = document.getElementById("yearSection").value;
    row.cells[5].innerHTML = document.querySelector(`input[name = "sex"]:checked`).value;
    row.cells[7].innerHTML = document.getElementById("course").value;
    row = null;
}

//DELETE DETAILS
function remove(th) {
    var choice = confirm("Are you sure you want to delete this record?");
    if(choice == true){
        row = th.parentElement.parentElement;
        document.getElementById("table").deleteRow(row.rowIndex);
    }
}