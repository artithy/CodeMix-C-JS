const prompt= require("prompt-sync")();
let month = parseInt(prompt("Enter the month number (1-12):"));


let days;


switch (month) {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
        days = 31;
        break;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        days = 30;
        break;
    case 2: 
        let year = parseInt(prompt("Enter the year:"));
        
        if ((year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0)) {
            days = 29; 
        } else {
            days = 28; 
        }
        break;
    default:
        alert("Invalid month number! Please enter a number between 1 and 12.");
        break;
}


if (month >= 1 && month <= 12) {
    console.log(`Month ${month} has ${days} days.`);
}
