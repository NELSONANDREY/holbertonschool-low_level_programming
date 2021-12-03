#include "main.h"
/**
 * 
 * 
 * 
 */
void ctr_c(int ctr1_c)
{
	char waiting[1024];
	int i;

	if (ctr1_c == SIGINT)
	{	
		write(STDOUT_FILENO, "\n", 1);
		getcwd(waiting, sizeof(waiting));
			for (i = 0; waiting[i] != '\0'; i++)
				;
			waiting[i] = '$';
			waiting[i + 1] = ' ';
			waiting[i + 2] = '\0';
			write(STDOUT_FILENO, waiting, _strlen(waiting));
	}
}
/**
 * @brief 
 * 
 * 
 * @param path 
 * @return char** 
 */
void **select_command(char *comand, _attribute_((unused))char *array)
{
	int dir;
	char *delim = " \n\t";
	char *exe;
	char *copycom = NULL, **get_path = NULL, *str1;

	get_path = search_path("PATH");
	str1 = *get_path;
	copycom = _strdup(comand);
	dir = comp_comand(comand, '/');
	if (dir == 0)
	{
		only_comand(copycom, str1, comand, array);
	} 
	else
	{
		exe = strtok(copycom, delim);
		argv_exec(comand, exe);
	}
	free(fill[0]);
	free(fill);
	free(copycom);
	return (NULL);
}
/**
 * @brief 
 * 
 * 
 * @param path 
 * @return char** 
 */
char **search_path(char *path)
{
	char **ret = environ, comp[4] = {0};
	int j = 0, i = 0, k = 0;

	while (*ret)
	{
		for (i = 0; i < 4; i++)
		{
			comp[i] = ret[j][i];
		}
		k = _strcmp(comp, path);
		if (k == 0)
		{
			k = _strlen(ret[j]);
			fill = malloc(sizeof(char) * k + 1);
			if (fill == NULL)
				return(NULL);
			*fill = _strdup(*ret);
			fill[0][4] = ':';
			break;
		}
		ret++;
	}
	return (fill);
}

/**
 * @brief 
 * 
 * 
 * @param path 
 * @return char** 
 */
int comp_comand(char *command, char simbol)
{
	int ret = 0, i;
	char stop = '\0';

	if (simbol == '/')
		stop = ' ';
	for (i = 0; command[i] != stop && command[i] != '\0'; i++)
	{
		if (command[i] == simbol)
		{
			ret++;
		}
	}
	return (ret);
}
/**
 * @brief 
 * 
 * @param copycom 
 * @param str1 
 * @param comand 
 * @param array 
 */
void only_comand(char *copycom, char *str1, char *comand, char *array)
{
	char *token1;
	int ctr_error = -1, k = 0;
	char *delim = " \n\t";

	token1 = strtok(copycom, delim);
	k = _strlen(token1);
	token1[k + 1] = '\0';
	ctr_error = loop_token(str1, token1, comand);
	if (ctr_error == -1 && ctr_error_isaty != -1)
	{
		perror("./shell");
		return;
	}
	else if (ctr_error == -1 && ctr_error_isaty == -1)
	{
		write(STDOUT_FILENO, array, _strlen(array));
		write(STDOUT_FILENO, ": 1: ", 5);
		write(STDOUT_FILENO, comand, _strlen(comand));
		write(STDOUT_FILENO, ": not found\n", 12);
	}
}
