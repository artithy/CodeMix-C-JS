var array = [3,0,2];
var n = array.length;
var expectedSum = (n * (n+1))/2;

var actualSum = 0;

for(var i=0; i< n; i++){
    
    actualSum = actualSum + array[i];
}

var missingNum = expectedSum - actualSum;
console.log(missingNum);