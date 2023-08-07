#include "main.h"

/**
 * append_text_to_file- Append
 * @filename: file name
 * @text_content: content
 * Return: 1 on sucess, or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	len = write(fd, text_content, strLen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
