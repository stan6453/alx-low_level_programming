#include "main.h"

int openfile1(char *);
int openfile2(char *);

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
	while (n > 0)
	{
		if (write(fd2, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		n = read(fd1, buf, BUFSIZE);
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}

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

int openfile2(char *filename)
{
	int fd = open(filename, O_WRONLY); 

	if (fd == -1)
		if ((fd = open(filename, O_CREAT | O_WRONLY, 0664)) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", filename);
			exit(99);
		}
	return (filename);
}
