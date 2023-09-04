/* Title: 2-append_text_to_file.c */
/* Rematch */

/* include header files */
#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - function that creates a file
 * @filename: name of the file to be appended
 * @txt_content: NULL terminated string to append to a file
 * @a_idk
 *
 * Return: 1 if SUCCESS else -1 if FAIL. -1 if filename = Null
 */

int append_text_to_file(const char *filename, char *txt_content)
{
	/* declaring and assigning variables */
	int length = 0;
	int wr;
	int fd;

	/* checking for NULL value */
	if (filename == NULL)
	{
		return (-1);
	}
	if (txt_content != NULL)
	{
		while (txt_content[length])
		{
			length += 1;
		}
	}

	/* opening file */
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, txt_content, length);

	/* if no file opens or is created */
	if (wr == -1 || fd == -1)
	{
		return (-1);
	}

	/* closing and returning success */
	close(fd);
	return (1);
}
