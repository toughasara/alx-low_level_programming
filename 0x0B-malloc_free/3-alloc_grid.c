#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
        int i, j;
        int **a;

        if (width <= 0 || height <= 0)
                return (NULL);

        a = malloc(sizeof(int *) * height);

        if (a == NULL)
                return (NULL);

        for (i = 0; i < height; i++)
        {
                a[i] = malloc(sizeof(int) * width);

                if (a[i] == NULL)
                {
                        for (j = i - 1; j >= 0; j--)
                        {
                                free(a[j]);
                        }

                        free(a);
                        return (NULL);
                }
        }

        for (i = 0; i < height; i++)
        {
                for (j = 0; j < width; j++)
                {
                        a[i][j] = 0;
                }
        }

        return (a);
}
