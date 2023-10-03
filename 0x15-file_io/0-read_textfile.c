#include "main.h"

/**
 * read_textfile - a func to read atext file and print it
 *
 * @filename: pointer to file name
 *
 * @letters: letters to read
 *
 * Return: actual number of letters if success or  0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text_len;
	int fp, int text_out;

	if (!filename  || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	text_len = malloc(letters);
	text_out = read(fp, text_len, letters);
	text_out = write(STDOUT_FILENO, text_len, text_out);

	close(fp);
	return (text_out);
}
