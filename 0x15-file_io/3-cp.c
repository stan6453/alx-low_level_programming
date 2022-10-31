#include "main.h"

int openfile1(char *);
int openfile2(char *);
void closefile(int);

/**
 * main - copies the contents of one file to another
 * @argc: argument count
 * @argv: array of string arguments
 * Return: error code varies. 1 if successful
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, n, buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd1 = openfile1(argv[1]);
	fd2 = openfile2(argv[2]);
	n = read(fd1, buf, BUFSIZE);
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (n > 0)
	{
		if (write(fd2, buf, n) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		n = read(fd1, buf, BUFSIZE);
		if (n == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	closefile(fd1);
	closefile(fd2);
	return (1);
}

/**
 * openfile1 - open file1
 * @filename: the name of the file
 * Return: file descriptor
 */
int openfile1(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * openfile2 - open file2
 * @filename: the name of the file
 * Return: file descriptor
 */
int openfile2(char *filename)
{
	int fd = open(filename, O_WRONLY);

	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0664);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	}
	return (fd);
}


/**
 * closefile - close a file
 * @fd: file descriptor to close
 */
void closefile(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
