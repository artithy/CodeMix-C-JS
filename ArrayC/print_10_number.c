#include <stdio.h>
int main(){
    int element[10];
    int i;
    for(i=0; i<10; i++){

    printf("element - %d: ",i );
    scanf("%d", &element[i]);
    }
        printf("Elements in array are: ");
        for(i=0; i<10; i++){
            printf("%d\n", element[i]);
        }
       
       return 0;


}