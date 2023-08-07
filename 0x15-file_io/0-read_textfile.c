#include "main.h"

/**
 * read_textfile- reads a text file and print
 * @filename: the file
 * @letters: number of letters
 * Return: read bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes1, bytes2;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes1 = read(fd, buffer, letters);
	bytes2 = write(STDOUT_FILENO, buffer, bytes1);
	close(fd);
	free(buffer);

	return (bytes2);
}
