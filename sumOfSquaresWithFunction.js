function sumOfSquares(arr) {
    return arr.reduce((sum, num) => sum + num * num, 0);
}


const numbers = [1, 2, 3, 4, 5];
console.log(sumOfSquares(numbers));   
