#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <unistd.h>
#include <sys/wait.h>
#include "executor.h"
#include "builtins.h"

int execute_command(char **args) {
    if (strcmp(args[0], "cd") == 0) {
        return shell_cd(args);
    }
    if (strcmp(args[0], "exit") == 0) {
        return shell_exit(args);
    }

    pid_t pid;
    int status;

    pid = fork();
    if (pid == 0) {
        if (execvp(args[0], args) == -1) {
            perror("Shell> ");
        }
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        perror("Shell>");
    } else {
        while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    return 1;
}
