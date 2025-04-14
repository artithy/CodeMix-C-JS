function isLowerCaseAt(str, index) {
    if (index < 0 || index >= str.length) return false;
    const char = str.charAt(index);
    return char === char.toLowerCase() && char !== char.toUpperCase();
}


console.log(isLowerCaseAt("APpLe", 3));

