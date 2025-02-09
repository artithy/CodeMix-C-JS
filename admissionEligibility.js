
const prompt = require("prompt-sync")();


let physicsMarks = prompt("Input the marks obtained in Physics: ");
let chemistryMarks = prompt("Input the marks obtained in Chemistry: ");
let mathsMarks = prompt("Input the marks obtained in Mathematics: ");


let totalMarks = physicsMarks + chemistryMarks + mathsMarks;
let totalMathsPhysics = mathsMarks + physicsMarks;


if ((mathsMarks >= 65 && physicsMarks >= 55 && chemistryMarks >= 50 && totalMarks >= 190) || totalMathsPhysics >= 140) {
    console.log("The candidate is eligible for admission.");
} else {
    console.log("The candidate is not eligible for admission.");
}
