#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: Text file being read
 * @letters: Num of letters to be read
 * Return: w- actual num of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t f;
	ssize_t m;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(f, buf, letters);
	m = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(f);
	return (m);
}

