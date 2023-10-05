#include "main.h"

/**
 * create_file -  a function that creates a file.
 *
 * @filename : file name
 *
 * @text_content : tect content
 *
 * Return: 1 success , -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int x = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
		x = strlen(text_content);

	if (write(fp, text_content, x) != -1)
		return (1);

	else
		return (-1);

	close(fp);

	return (1);
}
