const fruits = [
  ["Apple", "Red"],
  ["Banana", "Yellow"],
  ["Grapes", "Purple"]
];


for (let i = 0; i < fruits.length; i++) {
  const [fruitName, fruitColor] = fruits[i];
  console.log(`The fruit name is ${fruitName} and its color is ${fruitColor}`);
}
