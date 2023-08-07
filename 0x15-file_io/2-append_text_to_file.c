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
	int len;
	int per;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	per = write(fd, text_content, len);
	if (per == -1)
		return (-1);
	close(fd);
	return (1);
}
