const prompt = require("prompt-sync")(); 


let x = prompt("Enter the X coordinate: ");
let y = prompt("Enter the Y coordinate: ");


if (x > 0 && y > 0) {
    console.log(`The coordinate point (${x}, ${y}) lies in the First quadrant.`);
} else if (x < 0 && y > 0) {
    console.log(`The coordinate point (${x}, ${y}) lies in the Second quadrant.`);
} else if (x < 0 && y < 0) {
    console.log(`The coordinate point (${x}, ${y}) lies in the Third quadrant.`);
} else if (x > 0 && y < 0) {
    console.log(`The coordinate point (${x}, ${y}) lies in the Fourth quadrant.`);
} else if (x === 0 && y !== 0) {
    console.log(`The coordinate point (${x}, ${y}) lies on the Y-axis.`);
} else if (y === 0 && x !== 0) {
    console.log(`The coordinate point (${x}, ${y}) lies on the X-axis.`);
} else {
    console.log(`The coordinate point (${x}, ${y}) is the origin.`);
}
