#include <stdio.h>

int main() {
    int day, month, year;
    int hour, minute, second;

   
    printf("Enter day : ");
    scanf("%d", &day);
    printf("Enter month : ");
    scanf("%d", &month);
    printf("Enter year : ");
    scanf("%d", &year);


    printf("Enter hour : ");
    scanf("%d", &hour);
    printf("Enter minute : ");
    scanf("%d", &minute);
    printf("Enter second : ");
    scanf("%d", &second);

    
    printf("\nThe date and time is:\n");
    printf("Date: %d-%d-%d\n", day, month, year);
    printf("Time: %d:%d:%d\n", hour, minute, second);

    return 0;
}
