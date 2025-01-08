// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
   int roll, phy, chy, comp;
   char name[40];
   
   printf("Enter your roll number ");
   scanf("%d",&roll);
   
   printf("Enter your name ");
   scanf("%s", name);
   
   printf("Enter your phy number ");
   scanf("%d",&phy);
   
   printf("Enter your chy number ");
   scanf("%d",&chy);
   
   printf("Enter your comp number ");
   scanf("%d",&comp);
   
   float total_marks = phy+chy+comp;
   float per=(total_marks/300)*100;
   char div[7];
   
   if(per>=60){
       strcpy(div,"first");
   }
   else if(per>=48){
        strcpy(div,"second");
   }
   else if(per>33){
       strcpy(div,"pass");
   }
   else{
       strcpy(div,"fail");
   }
   
   printf("Roll N0: %d",roll);
   
   printf("Name Of Student: %s",name);
   printf("\nMarks in Physics: %d",phy);
   printf("\nMarks in chemistry: %d",chy);
   printf("\nMarks in computer: %d",comp);
   printf("\nTotal Marks: %.02f",total_marks);
   printf("\npercentage: %.02f",per);
   printf("\ndivison: %s ",div);
   
   

    return 0;
}