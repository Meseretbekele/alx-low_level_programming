#include <stdio.h>
/**
 * main - print some letters of alphabet
 *
 *
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
