const prompt = require("prompt-sync")();

let number1 = prompt("Test Data: ");
let number2 = prompt("Test Data: ");
let number3 = prompt("Test Data: ");


if(number1>=number2 && number1>=number3){
    console.log("The 1st Number is the greatest among three");
}else if(number2>=number1 && number2>=number3){
    console.log("The 2nd Number is the greatest among three");

}else{
    console.log("The 3rd Number is the greatest among three")

}