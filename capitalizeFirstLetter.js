function capitalizeFirstLetter(str) {
    if (str.length === 0) return str; 
    return str[0].toUpperCase() + str.slice(1);
}


console.log(capitalizeFirstLetter("hello")); 
console.log(capitalizeFirstLetter("world")); 
