#include "main.h"

/**
 * _strpbrk - searches for bytes in a string.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int k, l;
for (k = 0; *(s + k) != '\0'; k++)
{
for (l = 0; *(accept + l) != '\0'; l++)
{
if (*(s + k) == *(accept + l))
return (s + k);
}
}
return ('\0');
}
