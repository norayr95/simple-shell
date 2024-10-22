#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
#include "parser.h"
#include "executor.h"


void shell_loop(void) {
    char *line = NULL;
    size_t bufsize = 0;
    char **args;

    while (1)
    {
        printf("shell> ");
        getline(&line, &bufsize, stdin);
        args = split_line(line);
        execute_command(args);

        free(args);
    }
    free(line);
}