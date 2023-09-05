#include "main.h"

/**
 * create_file- creates file
 * @filename: the filae
 * @text_content: content to write
 * Return: 1 on success, or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters, wrote;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	wrote = write(fd, text_content, letters);
	if (wrote == -1)
		return (-1);

	close(fd);
	return (1);
}
