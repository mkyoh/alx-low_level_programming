#include "main.h"
/**
 * _isupper - func check if uppercase letters
 * @c: char to check
 *
 * Return:if uppercase return 1, else return 0
 */
int _isupper(int c)
0{
	if (c >= 'A' && c <= 'z')
		return (1);

	return (0);
}
