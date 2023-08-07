#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: pointer to the name of the file name.
 * @text_content: A pointer to a text_content to write to the file.
 *
 * Return: If the function fails (-1).
 *         Otherwise (1).
 */

int create_file(const char *filename, char *text_content)
{
	int filecontent, write_content, content_len = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];i++)
			content_len++;
	}

	filecontent = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_content = write(filecontent, text_content, content_len);

	if (filecontent == -1 || write_content == -1)
		return (-1);

	close(filecontent);

	return (1);
}
