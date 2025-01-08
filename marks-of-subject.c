// Online C compiler to run C program online
#include <stdio.h>
int main()
{ 
    int math, physics, chemistry, total_marks, math_physics_marks;
    printf("Enter the marks of math ");
    scanf("%d", &math);
    
    printf("Enter the marks of physics ");
    scanf("%d", &physics);
    
    printf("Enter the marks of chemistry ");
    scanf("%d", &chemistry);
    
    total_marks = math + physics +chemistry;
    math_physics_marks = math + physics;
    
    if(math>=65 && physics>=55 && chemistry>=50 && total_marks>=190 && math_physics_marks>=140){
        printf("you are eligable");
    }else{
        printf("you are not eligable");
    }
   
        return 0;
}