#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print all possible combinations of single-digit numbers
 * Numbers are separated by , followed by a space
 * Numbers are printed in ascending order
 * Return: 0
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
