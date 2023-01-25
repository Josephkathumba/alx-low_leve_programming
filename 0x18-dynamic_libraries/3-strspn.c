#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int k, j, bool;
for (k = 0; *(s + k) != '\0'; k++)
{
bool = 1;
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + k) == *(accept + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (k);
}
