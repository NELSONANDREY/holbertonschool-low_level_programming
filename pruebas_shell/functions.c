#include "main.h"
/**
 * 
 * 
 * 
 */
int main(void)
{
	char waiting[254] = {0};
	size_t memory = 0;
	char *comand = NULL;
	char *salida;
	int com_exit = 1, i;

	salida = "exit\n";
	while (com_exit != 0)
	{
		getcwd(waiting, sizeof(waiting));
		for (i = 0; waiting[i] != '\0'; i++)
			;
		waiting[i] = '$';
		waiting[i + 1] = ' ';
		waiting[i + 2] = '\0';
		write(STDOUT_FILENO, waiting, _strlen(waiting));
		getline(&comand, &memory, stdin);
		com_exit = _strcmp(salida, comand);
		if (com_exit == 0)
			return (0);
		select_command(comand);
		free(fill);
	}
	return (0);
}
