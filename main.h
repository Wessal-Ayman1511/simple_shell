#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
extern char **environ;


int str_compare(char *str1, char *str2);
char *str_copy(char *destination, char *source);
char *str_concat(char *destination, char *source);
int str_length(char *s);
int _emptyLine(char *buffer);
int _exe(char **arguments);
void *memory_alloc(unsigned int n, unsigned int size);
char **_tokens(char *s, char *del);
void print_env(void);
char *get_env(char *var);
char *path_searching(char *command);

#endif
