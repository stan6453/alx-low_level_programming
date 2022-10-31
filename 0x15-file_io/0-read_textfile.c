#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be printed to stdout
 * @letters:  number of letters to be read and printed
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, total = 0, buf[BUFSIZE];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);
	while (n != 0)
	{
		if (n == -1)
			return (0);
		if (write(1, buf, n) == -1)
			return (0);
		total += n;
		n = read(fd, buf, letters);
	}
	close(fd);
	return (total);
}
