#include <stdio.h>
#include "libmylib.h"
int main(void)
{
char str[] = "Hello, world!";
int i;
for (i = 0; str[i]; i++)
{
if (isupper(str[i]))
{
printf("%c is uppercase\n", str[i]);
}
}
return (0);
}
