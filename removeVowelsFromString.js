function removeVowels(str) {
    let result = "";
    for (let i = 0; i < str.length; i++) {
        let ch = str[i];
        if (
            ch !== 'a' && ch !== 'e' && ch !== 'i' && ch !== 'o' && ch !== 'u' &&
            ch !== 'A' && ch !== 'E' && ch !== 'I' && ch !== 'O' && ch !== 'U'
        ) {
            result += ch;
        }
    }
    return result;
}

let input = "Vowel";
let output = removeVowels(input);
console.log("Original:", input);
console.log("Without vowels:", output);
