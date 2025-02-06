#include <stdio.h>
#include <string.h>

int main() {
    char first[30] = "string 1";
    char second[30] = "string 2: I’m using strncpy now";

    
    strncpy(first, second, 12);


    first[12] = '\0';

    printf("String first is: %s\n", first);

    return 0;
}
