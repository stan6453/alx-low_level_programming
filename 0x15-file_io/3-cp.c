#include "main.h"

int main(int argc, char *argv[])
{
	int fd1, fd2, n, buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	if ((fd1 = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((fd2 = open(argv[2], O_WRONLY)) == -1)
		if ((fd2 = open(argv[2], O_CREAT | O_WRONLY, 0664)) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	while ((n = read(fd1, buf, BUFSIZE)) > 0)
		if (write(fd2, buf, n) != n)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
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
}
