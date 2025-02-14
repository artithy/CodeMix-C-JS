const prompt= require("prompt-sync")();


let grade = prompt("Enter your grade (A, B, C, D, F):");

if (grade === "A") {
    console.log("Excellent");
} else if (grade === "B") {
    console.log("Good");
} else if (grade === "C") {
    console.log("Average");
} else if (grade === "D") {
    console.log("Poor");
} else if (grade === "F") {
    console.log("Fail");
} else {
    console.log("Invalid grade entered");
}
