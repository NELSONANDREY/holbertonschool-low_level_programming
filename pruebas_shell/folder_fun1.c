#include "main.h"
/**
 * @brief 
 * 
 * 
 * @param path 
 * @return char** 
 */
int loop_token(char *str1, char *token1, _attribute_((unused))char *comand)
{
	int j, ctr_error = -1;
	char *token, *exe, *sim = "/\0";
	struct stat buf;

	exe = NULL;
	for (j = 1; ; j++, str1 = NULL)
		{	
			token = strtok(str1, ":");
			if (token == NULL)
				break;
			exe = malloc(sizeof(char) * (_strlen(token1) + _strlen(token)) + 2);
			if (exe == NULL)
				return(-1);
			exe[0] = '\0';			
			exe = _strcat(exe, token);
			exe = _strcat(exe, sim);
			exe = _strcat(exe, token1);
			if (stat(exe, &buf) == 0)
			{
				ctr_error = 0;
				argv_exec(comand, exe);
				free(exe);
				break;
			}	
			free(exe);
		}
	return (ctr_error);
}
/**
 * @brief 
 * 
 * 
 */
void argv_exec(char *comand, char *exe)
{
	char *delim = " \n\t", *argv[1024], *token1;
	int count_comands, j;
	struct stat buf; 
	

	count_comands = comp_comand(comand, ' ');
	if (count_comands != 0)
	{
		for (j = 0; ; j++, comand = NULL)
		{
			token1 = strtok(comand, delim);
			if (token1 == NULL)
				break;
			argv[j] = token1;
		}
		argv[j] = NULL;
	}
	else
	{
		argv[0] = exe, argv[1] = NULL;
	}
	if (stat(exe, &buf) == 0)
		proccess_fork(exe, argv);
	else
		perror("./shell");
}
/**
 * @brief 
 * 
 * 
 * @param path 
 * @return char** 
 */
int proccess_fork(char *exe, char **argv)
{
	pid_t pid;	
	pid = fork();
	if (pid < 0)
		perror("./shell");
	else if (pid > 0)
		wait(NULL);
	else
	{
		execv(exe, argv);
		exit(1);
	}
	return (0);
}
