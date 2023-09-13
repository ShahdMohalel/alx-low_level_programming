#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - print every min in a day
 * void: "void" no parameters.
 * Return: no return.
*/
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
return;
}
