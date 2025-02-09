const prompt = require("prompt-sync")();

let height = prompt("Test Data: ");

if(height<150){
    console.log("The person is Dwarf.")
}else if(height>=150 && height<=180){
    console.log("The person has an average height.")
}else{
    console.log("The person is Tall.")
}