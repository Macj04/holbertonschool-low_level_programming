#include "main.h"
/**
 * read_textfile - read a text file and print it to the posix stdoutput
 * @filename:filename
 * @letters:letters
 * Return: read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int mc = 0;
	ssize_t leer = 0;

	buf = malloc(letters);

	if (!buf)
		return (0);
	if (filename == NULL)
		return (0);

	mc = open(filename, O_RDONLY);

	if (mc == -1)
		return (0);

	leer = read(mc, buf, letters);
	close(mc);
	write(STDOUT_FILENO, buf, leer);
	free(buf);

	return (leer);
}
