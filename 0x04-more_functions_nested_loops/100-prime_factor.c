#include <stdio.h>
/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int n, l;
n = 612852475143;
for (l = 2; l <= n; l++)
{
if (n % l == 0)
{
n /= l;
l = l - 1;
}
}
printf("%ld\n", l);
return (0);
}
