#include "main.h"

/**
 * buff_allocate - allocate 1024 bytes for buffer
 *
 * @file: file name
 *
 * Return: new buffer
 */

char *buff_allocate(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * file_close - close the file descriptor
 *
 * @fb: file descriptor
 */

void file_close(int fb)
{
	int ch;

	ch = close(fb);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fb);
		exit(100);
	}
}

/**
 * main - Entry point
 *
 * @agc: number of arguments
 *
 * @agv: array of arguments
 *
 * Return: (0)success or (-1)failed
 */

int main(int agc, char *agv[])
{
	int s_file, d_file, rd, wr;
	char *buffer;

	if (agc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = buff_allocate(agv[2]);
	s_file = open(agv[1], O_RDONLY);
	rd = read(s_file, buffer, 1024);
	d_file = open(agv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (s_file == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", agv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(d_file, buffer, rd);
		if (d_file == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", agv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(s_file, buffer, 1024);
		d_file = open(agv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	file_close(s_file);
	file_close(d_file);
	return (0);
}
