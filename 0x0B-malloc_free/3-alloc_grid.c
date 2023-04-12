#include "main.h"
#include <stdlib.h>

/**

alloc_grid - Allocates a 2D array of integers.
@width: Width of the 2D array.
@height: Height of the 2D array.
Return: Pointer to the allocated 2D array of integers or NULL if failure.
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = i; j >= 0; j--)
free(grid[j]);
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
