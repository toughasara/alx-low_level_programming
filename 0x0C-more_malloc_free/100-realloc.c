#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - ...
  * @mem_ptr: ...
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */
void *_realloc(void *mem_ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size) /* no need to allocate new memory */
		return (mem_ptr);

	if (mem_ptr == NULL) /* allocate new memory */
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}

	if (new_size == 0) /* free memory and return NULL */
	{
		free(mem_ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size); /* reallocate memory */

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *) mem_ptr)[i];
	}

	free(mem_ptr);
	return (new_ptr);
}
