function uncapitalizeWords(str) {
    return str
        .split(" ")
        .map(word => {
            if (word.length === 0) return "";
            return word[0].toLowerCase() + word.slice(1);
        })
        .join(" ");
}

const input = "HELLO, I AM TITHY";
const output = uncapitalizeWords(input);
console.log(output); 
