#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
int cnt = 0;
while (*(s + cnt) != '\0')
{
if ((*(s + cnt) > 96) && (*(s + cnt) < 123))
*(s + cnt) = *(s + cnt) - 32;
count++;
}
return (s);
}
