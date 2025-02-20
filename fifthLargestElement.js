let arr = [10, 20, 4, 45, 99, 50, 60];

arr.sort(function(a, b) {
    return b - a;
});

if (arr.length >= 5) {
    console.log(arr[4]);  
} else {
    console.log("No Element");
}
