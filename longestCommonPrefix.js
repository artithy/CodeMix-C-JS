function longestCommonPrefix(arr) {
    if (!arr.length) return "";

    let index = arr[0];

    for (let i = 1; i < arr.length; i++) {
        while (arr[i].indexOf(index) !== 0) {
            index = prefix.slice(0, -1);
            if (!index) return "";
        }
    }

    return index;
}



console.log(longestCommonPrefix(["rain", "rainbow"])); 
