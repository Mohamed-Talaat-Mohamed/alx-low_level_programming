#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename : the name of the file
 *
 * @text_content : NULL terminated string to add at the end of the file
 *
 * Return: 1 success or -1 If (filename or text_content) is NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int x = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (!text_content)
		x = strlen(text_content);

	if (write(fp, text_content, x) != -1)
		return (1);

	else
		return (-1);

	close(fp);

	return (1);
}
