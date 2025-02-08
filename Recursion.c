
#include <stdio.h>

int getFibo(int n,int n1,int n2){
    if(n>0){
        int n3 = n1 + n2;
        return n3;
    }
    return 0;
}

int main(){
    int n = 7; 
    int n1 = 0;
    int n2 = 1;
    
    printf("%d %d", n1, n2);
    
    
    for(int i = 0; i<n-2; i++){
        
        int n3 = getFibo(n-i-2, n1, n2 );
        
        printf(" %d",n3 );
        
        n1= n2;
        n2 = n3;
    }
}

