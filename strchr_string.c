#include <stdio.h>
#include <string.h>
int main()
{
char mystr[30] = "This is a example";
printf ("%s", strchr(mystr, 'a'));
return 0;
}