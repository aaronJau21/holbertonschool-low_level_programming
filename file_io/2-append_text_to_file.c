#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Route to the text file.
 *
 * @text_content: Content to append in the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		close(fd);
		return (1);
	}

	close(fd);

	return (1);
}
