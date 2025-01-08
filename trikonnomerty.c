#include <stdio.h>
#include <math.h>

int main(){

    double a;
    double r;

    printf("Enter the angle of the circle: ");
    scanf("%lf", &a);

    r = a * (M_PI /180);

    double s = sin(r);

    printf("The value of sin is: %lf\n", s);



     
return 0; 


}