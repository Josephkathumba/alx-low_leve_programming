#include "josephk.h"
/**
 *main - Prints putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int str[] = {"hello world"};
int count, sz;
sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{ _putchar(str[count]);
}
_putchar('\n');
return (0);
}
