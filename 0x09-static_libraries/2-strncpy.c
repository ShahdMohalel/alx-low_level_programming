/**
 * _strncpy - copy a string
 * @n: The parameter 'n' represents the number of bytes
 * @src: reoresents the source
 * @dest: represents the destination
 * Return: dest_start
*/
char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (dest_start);
}
