#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * This program assigns a random number to n each time it is executed.
 * And prints the last digit of the number stored
 *
 * Return: 0
 */
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %i is %i and is 0\n", n, last);
else if (last < 6)
printf("Last digit of %i is %i", n, last);
printf("and is less than 6 and not 0");
return (0);
}
