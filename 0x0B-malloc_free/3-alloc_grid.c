#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
int **gridout;
int k, l;
if (width < 1 || height < 1)
return (NULL);
gridout = malloc(height * sizeof(int *));
if (gridout == NULL)
{ free(gridout);
return (NULL);
} for (k = 0; k < height; k++)
{ gridout[k] = malloc(width * sizeof(int));
if (gridout[k] == NULL)
{
for (k--; k >= 0; k--)
free(gridout[k]);
free(gridout);
return (NULL);
}
}
for (k = 0; k < height; k++)
for (l = 0; l < width; l++)
gridout[k][l] = 0;
return (gridout);
}
