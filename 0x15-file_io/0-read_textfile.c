#include "main.h"

/**
 * read_textfile- reads a text file
 * @filename: the file
 * @letters: num of letters to read
 * Return: bytes written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t red, wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	red = read(fd, buffer, letters);
	wrote = write(STDOUT_FILENO, buffer, red);
	free(buffer);
	close(fd);

	return (wrote);
}
