#include <stdio.h>
/**
 * main - entry point
 *
 * print alphabet in lowercase
 * return:0 always success
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
