var arr1 = [3, 'a', 'a', 'a', 2, 3, 'a', 3, 'a', 2, 4, 9, 3];
var frequency = {};
var maxCount = 0;
var mostFrequentItem;

for (var i = 0; i < arr1.length; i++) {
    var item = arr1[i];

    if (frequency[item] === undefined) {
        frequency[item] = 1;
    } else {
        frequency[item]++;
    }

    if (frequency[item] > maxCount) {
        maxCount = frequency[item];
        mostFrequentItem = item;
    }
}

console.log(mostFrequentItem + " ( " + maxCount + " times )");
