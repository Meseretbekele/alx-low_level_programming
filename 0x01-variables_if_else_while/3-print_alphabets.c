#include <stdio.h>
/**
 * main - prints the alphabetic in lower and upper case
 *
 * return: always success
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
} 
