let str = "I AM DONE";
let words = str.split(" ");
let newWords = [];

for (let i = 0; i < words.length; i++) {
    let word = words[i];
    let newWord = word.toLowerCase();
    newWords.push(newWord);
}

let finalResult = newWords.join(" ");
console.log(finalResult);
