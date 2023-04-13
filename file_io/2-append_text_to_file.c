#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename
 * @text_content: text content
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *mc;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	mc = fopen(filename, "a");
	if (mc == NULL)
	{
		return (-1);
	}

	fprintf(mc, "%s", text_content);
	fclose(mc);

	return (1);
}
