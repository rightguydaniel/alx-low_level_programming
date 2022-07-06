#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * Description: print _putchar and a new line
 * Return: 0
 */
int main(void)
{
	char a[] = "_putchar";
	size_t i = 0;
	size_t l = strlen(a);

	for (i = 0; i <= l; i++)
	{
		putchar (a[i]);
	}
	putchar('\n');
	return (0);
}
