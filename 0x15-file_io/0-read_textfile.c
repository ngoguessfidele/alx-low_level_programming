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

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	red = read(fd, buffer, letters);
	if (read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[red] = '\0';
	wrote = write(STDOUT_FILENO, buffer, red);
	free(buffer);
	close(fd);
	if (wrote < 0 || wrote != red)
		return (0);

	return (red);
}
