const prompt= require("prompt-sync")();

const costPrice = parseFloat(prompt("Enter Cost Price: "));
const sellingPrice = parseFloat(prompt("Enter Selling Price: "));

if (sellingPrice > costPrice) {
    let profit = sellingPrice - costPrice;
    console.log(`Profit: $${profit}`);
} else if (sellingPrice < costPrice) {
    let loss = costPrice - sellingPrice;
    console.log(`Loss: $${loss}`);
} else {
    console.log("No Profit, No Loss");
}
