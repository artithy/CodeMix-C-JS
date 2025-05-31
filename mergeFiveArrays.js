let arr1 = [1, 2];
let arr2 = [3, 4];
let arr3 = [5, 6];
let arr4 = [7, 8];
let arr5 = [9, 10];

let mergedArray = [];

for (let i = 0; i < arr1.length; i++) {
    mergedArray.push(arr1[i]);
}
for (let i = 0; i < arr2.length; i++) {
    mergedArray.push(arr2[i]);
}
for (let i = 0; i < arr3.length; i++) {
    mergedArray.push(arr3[i]);
}
for (let i = 0; i < arr4.length; i++) {
    mergedArray.push(arr4[i]);
}
for (let i = 0; i < arr5.length; i++) {
    mergedArray.push(arr5[i]);
}

console.log(mergedArray);
