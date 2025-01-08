// Online C compiler to run C program online
#include <stdio.h>
int main(){
     int buy,sell,rice;
     printf("Enter buy price: ");
     scanf("%d", &buy);
     
     printf("Enter sell price: ");
     scanf("%d", &sell);
     
     if(sell>buy){
         rice=sell-buy;
         printf("The profit amount is: %d", rice);
     }else if(buy>sell){
         rice=buy-sell;
         printf("The lost amount is: %d",rice);
         
     }
     else{
         printf("There is no profit , no loss");
     }

 return 0;
}