#include "main.h"
#include <stdlib.h>
		
/**
		
 * str_concat - get ends of input and add together for size
		
 * @s1: input one to concat
		
 * @s2: input two to concat
		
 * Return: concat of s1 and s2
		
 */
char *str_concat(const char *s1, const char *s2)
{
char *result;
size_t len1, len2, total_len;
size_t i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);
total_len = len1 + len2;
result = (char *)malloc((total_len + 1) * sizeof(char));
if (result == NULL)
return NULL;
for (i = 0; i < len1; i++)
result[i] = s1[i];

for (i = 0; i < len2; i++)   
result[len1 + i] = s2[i];
result[total_len] = '\0';
return result;
}
