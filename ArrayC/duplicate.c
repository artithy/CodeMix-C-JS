#include <stdio.h>
int main(){
     int i,j;
    int element[i];
    int n;
    int counter = 0;


    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array: \n",n);
    for(i=0; i<n; i++){
        printf("element - %d: ",i);
        scanf("%d", &element[i]);

    }


    for( i =0; i<n; i++){
        for( j=i+1; j<n; j++){
            if(element[i]=element[j]){
                counter ++;
                break;
            }
        }
    }

     printf("Total number of duplicate elements found in the array: %d\n", counter);
    return 0;


}