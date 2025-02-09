const prompt= require("prompt-sync")();

let m = prompt("Enter a value for m: ");

let n;

if(m>0){
    n = 1;
}else if(m ==0){
    n = 0;
}else{
    n = -1;
}

console.log("The value of n is: "+ n);
