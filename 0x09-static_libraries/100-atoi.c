#include"main.h"
/**
 * _atoi - check numbers sign
 * @s: The parameter 'n' represents the string.
 * Return: sign and result.
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] == ' ' || s[i] == '\t')
{
i++;
}
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
return (sign *result);
}
