#include "main.h"
/**
 * main - function that copy a file to another file
 * @argc:source 
 * @argv:destine
 * Return: file
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int sd, sf, s = 1024, d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	sf = open(argv[1], O_RDONLY);
	if (sf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sd = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (sd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (s == 1024)
	{
		s = read(sf, buf, 1024);
		if (s == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		d = write(sd, buf, s);
		if (d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(sf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sf);
		exit(100);
	}
	if (close(sd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sd);
		exit(100);
	}
	return (0);
}
