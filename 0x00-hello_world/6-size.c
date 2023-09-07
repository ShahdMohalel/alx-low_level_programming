#include <stdio.h>
/**
 * main - printf "the size of a char:\n ", sizeof(char)
 * main- printf "the size of an int:\n ", sizeof(int))
 * main - printf "the size of a long int:\n ", sizeof(int)
 * main -printf "the size of a long long int:\n ", sizeof(long)
 * main - printf "the size of a float:\n ", sizeof(float)
 * void: there's nothing here
 * Return: 0 always
*/
int main(void)
{
char a;
int b;
long c;
float d;
printf("the size of a char:\n ", sizeof(a));
printf("the size of an int:\n ", sizeof(b));
printf("the size of a long int:\n ", sizeof(b));
printf("the size of a long long int:\n ", sizeof(c));
printf("the size of a float:\n ", sizeof(d));
return (0);
}
