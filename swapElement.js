function moveElement(arr, fromIndex, toIndex) {
    let item = arr[fromIndex];
    arr.splice(fromIndex, 1);
    arr.splice(toIndex, 0, item);
    return arr;
}

// Example usage
let numbers = [10, 20, 30, 40, 50];
console.log(moveElement(numbers, 1, 3)); // Moves 20 to index 3
