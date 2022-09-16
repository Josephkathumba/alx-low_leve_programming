#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */

void print_triangle(int size)
{
int k, j;
for (k = 0; k < size; k++)
{
for (j = 1; j < (size - k); j++)
_putchar(' ');
for (j--; j < size; j++)
_putchar(35);
if (k < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
