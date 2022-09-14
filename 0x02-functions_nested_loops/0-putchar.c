#include "main.h"
/**
 *main - Prints putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int str[] = {1, 22, 58,  7, 45, 1, 25,  6, 8, 98, 0, 5};
int count, sz;
sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{ _putchar(str[count]);
}
_putchar('\n');
return (0);
}
