var maxConsuvative = 0;
var CurrentConsuvative = 0;

var array = [1,0,0,1,0,1,1,1,1,0];


for(i=0; i<array.length; i++){
    if(array[i] == 1){
        CurrentConsuvative++;
        if(CurrentConsuvative>maxConsuvative){
            maxConsuvative = CurrentConsuvative;

        }

    }else{
        CurrentConsuvative = 0;

    }
}

console.log("The maximum number of consuvative is: ",maxConsuvative);