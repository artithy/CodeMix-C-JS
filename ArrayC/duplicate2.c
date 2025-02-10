#include <stdio.h>
int main(){
     int i,j,result;
    int arr[]={2,3,3,2,1};
    int counter = 0;
    


    for( i =0; i<5; i++){
counter =0;
        for( j=0; j<5; j++){
            if(arr[i]==arr[j]){
                counter ++;
            }
        }
if(counter==1){
result = arr[i];

break;
}
    }

      printf("%d", result);
    return 0;


}