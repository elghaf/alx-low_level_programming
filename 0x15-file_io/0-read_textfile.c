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
    char *buffer;
	ssize_t open_file, read_file, write_file;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (open_file == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);

	return (write_file); 
}
