let mainStr = "programming";
let searchStr = "ming";

let len = searchStr.length;
let lastPart = mainStr.slice(-len);
let isMatch = (lastPart === searchStr);

console.log(isMatch);
