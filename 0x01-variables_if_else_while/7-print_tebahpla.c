#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 always success
 */
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
