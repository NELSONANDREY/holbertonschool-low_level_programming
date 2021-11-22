#include "main.h"

/**
 * read_textfile - Entry Point
 * @filename: file name
 * @letters: size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wrt;
	size_t str = 0;
	char *buf;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	rd = read(file, buf, letters);
	if (rd == -1)
		return (0);

	while (buf[str] != '\0')
		str++;
	wrt = write(0, buf, str);
	if (wrt == -1)
		return (0);
	if (str < letters)
		str++;
	close(file);
	free(buf);
	return (str);
}
