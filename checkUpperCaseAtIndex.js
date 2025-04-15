function isUpperCaseAt(str, index) {
    if (index < 0 || index >= str.length) return false;
    const char = str.charAt(index);
    return char === char.toUpperCase() && char !== char.toLowerCase();
}

console.log(isUpperCaseAt("APpLe", 0)); // true
