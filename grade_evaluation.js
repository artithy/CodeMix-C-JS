const prompt = require("prompt-sync")();


let rollNo = prompt("Enter Roll No:");
let name = prompt("Enter Name:");
let marks1 = parseFloat(prompt("Enter marks for Subject 1:"));
let marks2 = parseFloat(prompt("Enter marks for Subject 2:"));
let marks3 = parseFloat(prompt("Enter marks for Subject 3:"));


let total = marks1 + marks2 + marks3;
let percentage = (total / 300) * 100;
let division;

if (percentage >= 60) {
    division = "First Division";
} else if (percentage >= 50) {
    division = "Second Division";
} else if (percentage >= 40) {
    division = "Third Division";
} else {
    division = "Fail";
}


console.log("Roll No:", rollNo);
console.log("Name:", name);
console.log("Total Marks:", total);
console.log("Percentage:", percentage.toFixed(2) + "%");
console.log("Division:", division);
