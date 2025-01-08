// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character word: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("This is normal character");
    }
    else
    {
        printf("This is a special character");
    }

    return 0;
}