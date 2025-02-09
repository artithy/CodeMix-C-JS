const prompt = require("prompt-sync")();

let age = prompt("Enter your age: ");

if(age>=18){
    console.log("Congratulation! You are eligible for casting your vote.")

}else{
    console.log("You are not eligible for casting your vote.")


}

