let num1 = 45;
let num2 = 55;

if (num1 >= 40 && num1 <= 60 && num2 >= 40 && num2 <= 60) {
  let largest = num1 > num2 ? num1 : num2;
  console.log(largest);
} else {
  console.log("Both numbers must be in the range of 40 to 60.");
}
