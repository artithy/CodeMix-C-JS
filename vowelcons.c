// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("This alphabet is a vowel");
    }else{
        printf("This alphabet is a consonant");
    }
    
 
 
 return 0;
}