
let array = [2,2,1];


for (let i = 0; i < array.length; i++) {
    let current = array[i];
    let isUniq = 1;  
    

    for (let j = 0; j < array.length; j++) {
        if (i !== j && current === array[j]) {
            isUniq = 0;  
            break;  
        }
    }

    
    if (isUniq === 1) {
        console.log("The uniq number is: "+current);
    }
}
