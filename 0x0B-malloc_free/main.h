#ifndef MAIN_H
#define MAIN_H

/**

create_array - allocates memory and initializes it with a char
@size: size of memory block to allocate
@c: char to initialize the memory block
Return: pointer to the allocated memory block
*/
char *create_array(unsigned int size, char c);
/**

_strdup - duplicates a string
@str: string to duplicate
Return: pointer to the newly allocated memory block
*/
char *_strdup(char *str);
/**

str_concat - concatenates two strings
@s1: first string
@s2: second string
Return: pointer to the newly allocated memory block containing the concatenated strings
*/
char *str_concat(char *s1, char *s2);
/**

alloc_grid - allocates a 2D array of integers
@width: width of the array
@height: height of the array
Return: pointer to the newly allocated 2D array
*/
int **alloc_grid(int width, int height);
/**

free_grid - frees a 2D array of integers
@grid: 2D array to free
@height: height of the array
*/
void free_grid(int **grid, int height);
/**

argstostr - concatenates all arguments passed to the program
@ac: number of arguments
@av: array of arguments
Return: pointer to the newly allocated memory block containing the concatenated arguments
*/
char *argstostr(int ac, char **av);
#endif /* MAIN_H */
