#include <stdio.h>   
#include <string.h>    

int main() {          
    char s[] = "leave";  
    int n = strlen(s);   
    
    
    for (int i = 0; i < n / 2; i++) {  
        char temp = s[i];           
        s[i] = s[n - i - 1];            
        s[n - i - 1] = temp;        
    }                                    
    
    s[n] = '\0';   
    printf("Reversed String: %s\n", s);  // 12
    return 0;  
} 
