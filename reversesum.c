#include <stdio.h>
int main(){

    int num,org,r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    org= num;


    while(num>0){
        r = num%10;
        num = num/10;
        sum = sum*10+r;
    }

    printf("The sum of the 5 digit is: %d", sum);
    
    if(org==sum){
        printf("The reverse and original number are same");
    }else{
         printf("The reverse and original number are not same");
    }



    return 0;
}