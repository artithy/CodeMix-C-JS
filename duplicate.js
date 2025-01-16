var i,j,n,arr1=[5,9,5,3,2,3],arr2=[];
n=arr1.length;


for(i=0;i<n;i++){
    for(j=i+1; j<n; j++){
        if(arr1[i]==arr1[j]){
            arr2.push(arr1[i]);
            break;
        }
    }
}

 console.log(arr2);