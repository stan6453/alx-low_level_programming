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
	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);

	 if((n = read(fd, buf, letter)) == -1)
		 return (0);

	 if (write(1, buf, n) == -1)
		 return (0);
	 return (n);
}
