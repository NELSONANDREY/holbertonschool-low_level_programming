#include "main.h"
/**
 * main - function to copy files
 * @argc: numbers of parametres
 * @argv: files from and to
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int op_from, op_to, ctrread, ctrwrite, ctrclose;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	op_from = open(argv[1], O_RDONLY);
	if (op_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (op_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	ctrread = read(op_from, buf, 1024);
	for (; ctrread > 0; ctrread = read(op_from, buf, 1024))
	{
		ctrwrite = write(op_to, buf, ctrread);
		if (ctrwrite < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (ctrread == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	ctrclose = close(op_to);
	if (ctrclose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_to), exit(100);
	ctrclose = close(op_from);
	if (ctrclose == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op_from), exit(100);
	return (0);
}
