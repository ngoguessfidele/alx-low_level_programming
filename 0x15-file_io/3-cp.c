#include "main.h"

/**
 * print_error- prints errors
 * @file_from: fd of original
 * @file_to: fd of destination
 * @argv: arguments
 * Return: exit value
 */

void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main- Entry point
 * @argc: number of args
 * @argv: vector of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int exit_error, file_from, file_to;
	ssize_t red, written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(file_from, file_to, argv);
	red = 1024;
	while (red == 1024)
	{
		red = read(file_from, buffer, 1024);
		if (red == -1)
			print_error(-1, 0, argv);
		written = write(file_to, buffer, red);
		if (written == -1)
			print_error(0, -1, argv);
	}
	exit_error = close(file_from);
	if (exit_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	exit_error = close(file_to);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
