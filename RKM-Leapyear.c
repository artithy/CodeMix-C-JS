#include <stdio.h>
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("This is a leap-year");
            }
            else
            {
                printf("This is not a leap-year");
            }
        }
        else
        {
            printf("This is a leap-year");
        }
    }
    else
    {
        printf("This is not a leap-year");
    }

    return 0;
}
