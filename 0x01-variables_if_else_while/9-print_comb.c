#include <stdio.h>

/**
 * main - print all the numbers in base 16 in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return(0);
}
