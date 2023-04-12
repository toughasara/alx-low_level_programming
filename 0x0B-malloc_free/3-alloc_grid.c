#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - ...
  * @width: ...
  * @height: ...
  *
  * Return: ...
  */

int **alloc_grid(int width, int height)
{
        int i, j, k, l;
        int **a;

        if (width <= 0 || height <= 0)
                return (NULL);

        a = malloc(sizeof(*a) * height);

        if (a == NULL)
                return (NULL);

        for (i = 0; i < height; i++)
        {
                a[i] = malloc(sizeof(**a) * width);

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

        for (k = 0; k < height; k++)
        {
                for (l = 0; l < width; l++)
                {
                        a[k][l] = 0;
                }
        }

        return (a);
}
