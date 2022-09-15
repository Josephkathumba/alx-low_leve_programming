#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * @num: number times table (0 < num < 16)
 *
 * Return: no return
 */
void print_times_table(int num)
{
int a, b, op;
if (num >= 0 && num < 16)
{
for (a = 0; a <= num; a++)
{ _putchar(48);
for (b = 1; b <= num; b++)
{  op = a * b;
_putchar(44);
_putchar(32);
if (op <= 9)
{
_putchar(32);
_putchar(32);
_putchar(op + 48);
}
else if (op <= 99)
{
_putchar(32);
_putchar((op / 10) + 48);
_putchar((op % 10) + 48);
}
else
{
_putchar(((op / 100) % 10) + 48);
_putchar(((op / 10) % 10) + 48);
_putchar((op % 10) + 48);
}
}
_putchar('\n'); }
}
}
