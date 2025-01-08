// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num[10];
    for(int i=0; i<10; i++){
    printf("element-%d: ",i);
    scanf("%d",&num[i]);
    }
    for(int j=0; j<10; j++){
        printf("%d ",num[j]);
    }
    
   return 0;
}