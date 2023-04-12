#include "main.h"
/**
 * create_file - function that create a file
 * @filename:filename
 * @text_content:text content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int mc;


	if (filename == NULL)
	{
		return (-1);
	}

	mc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (mc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size_t text_len = strlen(text_content);
		ssize_t bytes_written = write(mc, text_content, text_len);

		if (bytes_written == -1 || (size_t)bytes_written != text_len)
		{
			close(mc);
			return (-1);
		}
	}
	close (mc);
	return (1);
}
