// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int sidea,sideb,sidec;
    printf("Enter the first value: ");
    scanf("%d", &sidea);
    printf("Enter the second value: ");
    scanf("%d", &sideb);
    printf("Enter the third value: ");
    scanf("%d", &sidec);
    
    
    if((sidea+sideb>sidec) && (sideb+sidec>sidea) && (sidea+sidec>sideb))
    {
        if((sidea==sideb) && (sideb==sidec))
        {printf("This is an Equilateral Triangle");}
        else if(sidea==sideb || sideb==sidec || sidec==sidea)
        {printf("This is an Isosceles Triangle");}
        else{
            printf("This is an Scalene Triangle");
        }
    }
    
    

    return 0;
}