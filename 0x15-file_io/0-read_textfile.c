#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read/print text file to stdout.
 * @filename: the text file
 * @letters: num of letters read from the @filename
 * Return: w (num of bytes read and printed)else
 *        0 if write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
