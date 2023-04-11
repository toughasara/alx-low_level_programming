#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	l = i + j;
	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < l; k++)
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k - i];
	}

	s[k] = '\0';
	return (s);
}
