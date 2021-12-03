#include "main.h"
/**
 * @brief 
 * 
 * @return int 
 */
int main(_attribute_((unused))int argc, char *array[])
{
	char waiting[1024];
	size_t memory = 0;
	char *comand = NULL, coming_out[] = "exit\n";
	int com_exit = 1, i;

	if (isatty(fileno(stdin)))
	{		
		signal(SIGINT, ctr_c);
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
			com_exit = _strcmp(coming_out, comand);
			if (com_exit == 0)
			{
				free(comand);
				return (0);
			}
			select_command(comand, array[0]);
		}
	}
	else
	{
		ctr_error_isaty = -1;
		getline(&comand, &memory, stdin);
		com_exit = _strcmp(coming_out, comand);
		if (com_exit == 0)
		{
			free(comand);
			return (0);
		}
		select_command(comand, array[0]);
	}
	return (0);
}
