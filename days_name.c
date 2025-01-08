// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int digit;
    printf("Enter a digit: ");
    scanf("%d", &digit);
    
    if(digit=='1'){
        printf("saturday");
    }
    
    else if(digit==2)
    {
        printf("Sunday");
    }
    
    else if(digit==3)
    {
        printf("monday");
    }
    
    else if(digit==4)
    {
        printf("tuseday");
    }
     else if(digit==5)
    {
        printf("wednesday");
    }
    else if(digit==6)
    {
        printf("thursday");
    }
    
   else
    {
        printf("Friday");
    }
     
 
 return 0;
}
