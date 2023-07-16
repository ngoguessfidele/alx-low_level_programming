#include "main.h"

/**
 * read_textfile- reads
 * @filename: name of file
 * @letters: num of letters
 *
 * Return: num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	char *buffer;
	ssize_t _read, written;

	if (filename == NULL)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	_read = read(n, buffer, letters);
	written = write(STDOUT_FILENO, buffer, _read);
	close(n);
	free(buffer);

	return (written);
}
