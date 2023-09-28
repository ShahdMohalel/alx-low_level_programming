#include "main.h"
/**
 * _pow_recursion - the value of x raised to the power of y.
 * @x: The parameter 'x' represents the number.
 * @y: The parameter 'y' represents the power.
 * Return: returns (x * _pow_recursion(x,y - 1)).
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0 || x == 1)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
