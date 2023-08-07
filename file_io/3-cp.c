#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * readfd - Reads a file
 *
 * @fd_from: File descriptor for input file
 * @buf: Buffer
 * @size: Size of buffer
 * @file_name: Name of the file
 *
 * Return: Reading of the file, else 98
 */
ssize_t readfd(int fd_from, char *buf, int size, char *file_name)
{
	ssize_t file_read;

	file_read = read(fd_from, buf, size);
	if (file_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from");
		dprintf(STDERR_FILENO, "file %s\n", file_name);
		exit(98);
	}
	return (file_read);
}

/**
 * closefd - Closes the file
 *
 * @fd: Standard output code
 *
 * Return: Void
 */
void closefd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}
}


/**
 * main - Copies one file to another
 *
 * @argc: number of arguments in the command line
 * @argv: array of strings that contain
 * each of the commands in the command line
 *
 * Return: File that has been copied too, else 0.
 */
int main(int argc, char *argv[])
{
	ssize_t file_read, file_written;
	int fd_to, fd_from;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from");
		dprintf(STDERR_FILENO, "file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_read = readfd(fd_from, buf, sizeof(buf), argv[1]);
	while (file_read != 0)
	{
		file_written = write(fd_to, buf, file_read);
		if (file_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write");
			dprintf(STDERR_FILENO, "to %s\n", argv[2]);
			exit(99);
		}
		file_read = readfd(fd_from, buf, sizeof(buf), argv[1]);
	}
	closefd(fd_from);
	closefd(fd_to);
	return (0);
}
