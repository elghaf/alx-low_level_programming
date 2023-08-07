#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read string text and prints it to te POSIX
 * @filename: point of the file name
 * @letters: letter to be read
 * Return:  the actual number of letters,
 *          it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *bufers;
    ssize_t files, writ, re;

    files = open(filename, O_RDONLY)
    if (files == -1)
    {
        /* code */
        return (0);
    }
    bufers = malloc(sizeof(char) * letters);
    re = read(files, bufers, letters);
    writ = write(STDOUT_FILENO, bufers, re);
    free(bufers);
    close(files);
    return (writ);    
}
