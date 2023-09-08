#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - printf "Last digit of %d is %d and is greater than 5\n"
 * void: no parameters
 * Return: 0 always
*/
int main(void)
{
int n = 0;
srand(time(0));
int m = n % 10; /* calculate the last digit */
n = rand() - RAND_MAX / 2;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
else if (m < 6 && m != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
return (0);
}
