var arr = [6,9,8,5,15,5];
var largest = arr[0];
var secondLargest = 0;

for(var i=0; i<arr.length; i++){
    if(arr[i]>largest){
        secondLargest = largest;
        largest = arr[i];
    }else if(arr[i]>secondLargest && arr[i] !== largest){
        secondLargest = arr[i];
    }
}

console.log("The Second largest element in the array is: " + secondLargest)