
const prompt = require("prompt-sync")();

let side1 = parseFloat(prompt("Enter the length of the first side of the triangle:"));
let side2 = parseFloat(prompt("Enter the length of the second side of the triangle:"));
let side3 = parseFloat(prompt("Enter the length of the third side of the triangle:"));


if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
    console.log("Please enter valid positive numbers for the sides.");
} else {
    if (side1 === side2 && side2 === side3) {
        console.log("The triangle is Equilateral.");
    } else if (side1 === side2 || side2 === side3 || side1 === side3) {
        console.log("The triangle is Isosceles.");
    } else {
        console.log("The triangle is Scalene.");
    }
}
