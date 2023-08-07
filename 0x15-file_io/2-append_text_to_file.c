#include "main.h"

/**
 * append_text_to_file - add text end of the file.
 * @filename: A pointer to the name of the fle.
 * @text_content: The string to add to the e of the file.
 *
 * Return: If the function fails -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content) 
{
    int file_descriptor, write_result, content_length = 0;
    int i = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL) {
        for (i = 0; text_content[i];i++)
            content_length++;
    }

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    write_result = write(file_descriptor, text_content, content_length);

    if (file_descriptor == -1 || write_result == -1)
        return (-1);

    close(file_descriptor);
    return (1);
}
