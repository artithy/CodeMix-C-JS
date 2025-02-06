#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "String Function ";
    char s2[25] = "String Function Uses";

    
    if (strncmp(s1, s2, 8) == 0) {
        printf("String 1 and String 2 are equal\n");
    } else {
        printf("String 1 and String 2 are different\n");
    }

    return 0;
}
