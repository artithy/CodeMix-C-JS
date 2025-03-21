const prompt = require("prompt-sync")();
function isInRange(num) {
    return num >= 100 && num <= 200;
}


let num1 = parseInt(prompt("Enter the first integer: "));
let num2 = parseInt(prompt("Enter the second integer: "));


if (isInRange(num1) || isInRange(num2)) {
    console.log("numbers are in the range 100 to 200.");
} else {
    console.log("numbers are not in the range 100 to 200.");
}