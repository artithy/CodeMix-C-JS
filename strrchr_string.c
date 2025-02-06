#include <stdio.h>
#include <string.h>
int main()
{
char mystr[60] = "I am an example of function strrchr";
printf ("%s", strrchr(mystr, 'f'));
return 0;
}