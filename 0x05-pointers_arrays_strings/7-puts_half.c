#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
int cnt = 0, i;
while (cnt >= 0)
{
if (str[cnt] == '\0')
break;
cnt++;
}
if (cnt % 2 == 1)
i = cnt / 2;
else
i = (cnt - 1) / 2;
for (i++; i < cnt; i++)
_putchar(str[i]);
_putchar('\n');
}
