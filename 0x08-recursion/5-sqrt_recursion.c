#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The parameter 'n' represents the number.
 * Return: calculate_sqrt(n, 1).
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (calculate_sqrt(n, 1));
}
/**
 * calculate_sqrt - calculat the square.
 * @n: The parameter 'n' represents the number.
 * @guess: The parameter "guess" represents the number guessed.
 * Return: (calculate_sqrt(n, guess + 1)).
*/
int calculate_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return (calculate_sqrt(n, guess + 1));
}
