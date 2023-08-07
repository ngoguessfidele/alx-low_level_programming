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
	ssize_t bytes;
	char buf[letters + 1];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buf, letters);
	close(fd);
	if (bytes <= 0)
		return (0);
	buf[bytes] = '\0';
	printf("%s", buf);

	return (bytes);
}
