#include <stdio.h>
#include <ctype.h>
/**

main - Entry point
Return: Always 0(success)
*/
int main(void)
{
int num;
for (num=0; num<10; num++)
putchar((num % 10) + '0');
put char('\n');
return(0);
}
