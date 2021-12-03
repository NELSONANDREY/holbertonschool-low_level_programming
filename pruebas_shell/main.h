#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>


extern char **environ;
int ctr_error_isaty;
char **fill;

void evaluate_pwd();
void **select_command(char *comand, char *array);
int error(char * comand, int readcomand);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char **search_path(char *path);
char *tok(char *path, char *limit);
char *_strcat(char *dest, char *src);
int comp_comand(char *command, char simbol);
int proccess_fork(char *exe, char **argv);
int loop_token(char *str1, char *token1, char *comand);
char *_strdup(char *str);
void ctr_c(int ctr1_c);
void only_comand(char *copycom, char *str1, char *comand, char * array);
void argv_exec(char *comand, char *exe);

#endif /* MAIN_H */
