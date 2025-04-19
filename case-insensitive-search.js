function case_insensitive_search(mainText, searchText) {
    let mainLower = mainText.toLowerCase();
    let searchLower = searchText.toLowerCase();

    if (mainLower.indexOf(searchLower) !== -1) {
        return "Matched";
    } else {
        return "Not Matched";
    }
}
console.log(case_insensitive_search('Hello world', 'hello'));