#include "main.h"

/**
 * create_file- creates a file
 * @filename: file name
 * @text_content: content to write
 * Return: 1 on success, or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	write(fd, text_content, strLen(text_content));
	close(fd);
	return (1);
}
