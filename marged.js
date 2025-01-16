

var list1=[1,2,4];
var list2=[1,3,4];

function result(list1, list2){
     var i=0; j=0;
     var mergedList =[];
     
     while (i < list1.length && j < list2.length) {
        if (list1[i] < list2[j]) {
            mergedList.push(list1[i]);
            i++;
        } else {
            mergedList.push(list2[j]);
            j++;
        }
    }
     
     while (i < list1.length) {
        mergedList.push(list1[i]);
        i++;
    }
     while (j < list2.length) {
        mergedList.push(list2[j]);
        j++;}
     
     return mergedList;
     
    
}

var mergedList = result(list1, list2);
console.log(mergedList);

