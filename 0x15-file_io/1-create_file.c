#include "main.h"
/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file, wr, j;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j] != '\0'; j++)
			;
		wr = write(file, text_content, j);
		if (wr == -1)
			return (-1);
	}

	close(file);
	return (1);
}
