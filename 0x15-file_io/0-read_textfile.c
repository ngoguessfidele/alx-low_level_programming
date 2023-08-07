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
	char buf[letters + 1];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes1 = read(fd, buf, letters);
	close(fd);
	if (bytes1 <= 0)
		return (0);
	buf[bytes1] = '\0';
	bytes2 = write(STDOUT_FILENO, buf, bytes1);
	if (bytes2 != bytes1)
		return (0);

	return (bytes1);
}
