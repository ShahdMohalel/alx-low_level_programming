#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func -get the operetion function
 * @s: the operator.
 * Return: return result.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (s != NULL && *s != '\0')
{
if (s == ops[i].op)
{
return (ops[i].f);
}
else
{
continue;
}
i++;
}
return (NULL);
}
