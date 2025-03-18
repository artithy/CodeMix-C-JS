let arr1 = [1, 2, 3, 4];
let arr2 = [3, 4, 5, 6];

let mergedArray = [];
for (let i = 0; i < arr1.length; i++) {
    mergedArray.push(arr1[i]);
}
for (let i = 0; i < arr2.length; i++) {
    mergedArray.push(arr2[i]);
}

let uniqueArray = [];
for (let i = 0; i < mergedArray.length; i++) {
    let current = mergedArray[i];
    let found = false;
    for (let j = 0; j < uniqueArray.length; j++) {
        if (uniqueArray[j] === current) {
            found = true;
            break;
        }
    }
    if (!found) {
        uniqueArray.push(current);
    }
}

console.log(uniqueArray);
