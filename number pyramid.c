// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k=1,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    
    for(i=1; i<=rows; i++)
    { for(j=i; j<rows; j++){
        printf(" ");}
        for(j=1; j<=i; j++){
        printf("%d",K++);
            
        }
        printf("\n");
    }
    return 0;
}


//star pyramid
// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int i ,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        for(j=i; j<n-i;j++){
            printf(" ");}
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        
        printf("\n");
    }
    
    
    
    
    return 0;
}
