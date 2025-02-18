function isMultipleOf3Or7(number) {
    if (number > 0) {
        if (number % 3 === 0 || number % 7 === 0) {
            return `${number} is a multiple of 3 or 7.`;
        } else {
            return `${number} is NOT a multiple of 3 or 7.`;
        }
    } else {
        return "Please enter a positive number.";
    }
}


let num = 21; 
console.log(isMultipleOf3Or7(num));
