#include "main.h"
/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @x: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int x)
{
if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
{ return (1);
}
else
{ return (0);
}
_putchar('\n');
}
