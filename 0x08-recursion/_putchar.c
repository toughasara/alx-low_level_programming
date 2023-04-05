#include <unistd.h>

/**
* This is my _putchar.c 
*/

int _putchar(char c) {
    int result = write(STDOUT_FILENO, &c, 1);
    return result;
}
