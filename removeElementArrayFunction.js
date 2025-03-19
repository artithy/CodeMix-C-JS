function removeElement(arr, element) {
    return arr.filter(item => item !== element);
}

let numbers = [1, 2, 3, 4, 5];
let result = removeElement(numbers, 3);
console.log(result); 
