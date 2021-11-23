#include "main.h"

/**
 * read_textfile - Entry Point
 * @filename: file name
 * @letters: size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd;
	ssize_t j;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	rd = read(file, buf, letters);
	if (rd == -1)
		return (0);

	j = write(STDOUT_FILENO, buf, rd);
	if (j == -1)
		return (0);

	close(file);
	free(buf);
	return (j);
}
