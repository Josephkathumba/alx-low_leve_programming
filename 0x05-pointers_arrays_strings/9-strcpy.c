#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by source,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int cnt = 0;
while (cnt >= 0)
{
*(dest + cnt) = *(src + cnt);
if (*(src + cnt) == '\0')
break;
cnt++;
}
return (dest);
}
