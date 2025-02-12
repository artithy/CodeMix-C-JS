const prompt= require("prompt-sync")();


function isValidTriangle(angle1, angle2, angle3)
{
    if(angle1>0 && angle2>0 && angle3>0 && (angle1+angle2+angle3 == 180)){
        return "This is a valid triangle.";
    }else{
        return "This is not a valid triangle.";
    }

}


let angle1 = Number(prompt("Enter first angle: "));
let angle2 = Number(prompt("Enter second angle: "));
let angle3 = Number(prompt("Enter third angle: "));

console.log(isValidTriangle(angle1, angle2, angle3));