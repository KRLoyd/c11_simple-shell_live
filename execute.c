#include "shell.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>

int execute(char **tokens){
	pid_t child;
	int status;
        int return_val;
	const char *command;
	struct stat buf;

	(void)buf;
	if (!tokens)
		return (EXIT_SUCCESS);

	command = tokens[0];
	printf("command: %s\n", command);
	if (stat(command, &buf) == -1)
		return (127);
	
	if (access(command, X_OK) == -1)
		return (126);

	child = fork();
	if (child == 0)
	{
		return_val = execve(command, tokens, NULL);
	} else {
		wait(&status);
		return_val = WEXITSTATUS(status);
	}
	return (return_val);

}
