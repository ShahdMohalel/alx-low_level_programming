#include "main.h"
/**
 * is_prime_recursive - is a prime number?
 * @n: The parameter 'n' represents the number to be checked.
 * @divisor: The parameter "divisor" represents the number to be checked.
 * Return: 1 if true / 0 if false.
*/
int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}
if (divisor * divisor > n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_recursive(n, divisor + 1));
}
/**
 * is_prime_number - is a prime number?
 * @n: The parameter 'n' represents the number to be checked.
 * Return: 1 if true / 0 if false.
*/
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
