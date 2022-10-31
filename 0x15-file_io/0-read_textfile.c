#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be printed to stdout
 * @letters:  number of letters to be read and printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, buf[BUFSIZE];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);

	if (write(STDOUT_FILENO, buf, n) == -1)
		return (0);
	close(fd);
	return (n);
}
