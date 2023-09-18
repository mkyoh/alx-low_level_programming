#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest:copy to
 * @src: copy from
 * Return: string
*/
void *_strcpy(char *dest, const char *src)
{
int l = 0;
int x = 0;
while (*(src + 1) != '\0')
{
l++;
}
for ( ; x < 1; x++)
{
dest[x] = src[x];
}
dest[1] = '\0';
return (dest);
}
