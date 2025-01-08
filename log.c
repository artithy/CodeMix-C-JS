#include <stdio.h>
#include <math.h>

int main()
{
    double num, result1, result2;

    printf("Enter a number: ");
    scanf("%lf" , &num);


    result1 = log(num);
    result2 = log10(num);

    printf("The result of log %f is: %f\n",num, result1);
    printf("The result of log10 %f is: %f\n",num,  result2);


    return 0;
    
}