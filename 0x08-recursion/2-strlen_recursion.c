#include "main.h"

/**
 * string_length - Calculate the length of a string
 * @str: Pointer to the string to count
 *
 * Return: The length of the string, or 0 if the string is empty.
 */
int string_length(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + string_length(str + 1));
}
