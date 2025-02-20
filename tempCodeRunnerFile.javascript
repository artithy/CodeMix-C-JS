let arr = [10, 20, 4, 45, 99, 50, 60];

// Sort the array in descending order
arr.sort(function(a, b) {
    return b - a;
});

// Check if there are at least 5 elements
if (arr.length >= 5) {
    console.log(arr[4]);  // Output the fifth largest number
} else {
    console.log("Not enough elements");
}
