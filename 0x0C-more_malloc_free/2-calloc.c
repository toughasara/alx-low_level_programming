#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zero
 * @nmemb: Number of elements to allocate
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory or NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
