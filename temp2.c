// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temp;
    printf("enter a temparature in centrigrade: ");
    scanf("%d", &temp);
    
    if(temp<0){
        printf("Freezing water");
    }
    else if(temp>=0 && temp<10){
        printf("very cold");
    }
    else if(temp>=10 && temp<20){
        printf("cold water");
    }
    else if(temp>=20 && temp<30){
        printf("normal in temp");
    }
    else if(temp>=30 && temp<40){
        printf("its hot");
    }
    else{
        printf("very hot");
    }
    
    printf("test data: %d", temp);
    return 0;
}