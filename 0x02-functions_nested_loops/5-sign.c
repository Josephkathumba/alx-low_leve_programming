#include "main.h"
/**
 * print_sign - Determines  whether the input number is
 * greater, iqual or less than zero.
 *
 * @y: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int y)
{
if (y > 0)
{  _putchar(43);
return (1);
}
else if (y < 0)
{ _putchar(45);
return (-1);
}
else
{ _putchar(48);
return (0);
}
_putchar('\n');
}
