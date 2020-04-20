#include "shell.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **argv, char **env)
{
	int return_status = EXIT_SUCCESS;
	char *line = NULL;
	size_t n = 0;
	char **tokens = NULL;

	(void)ac; (void)argv; (void)env;

	if (isatty(STDIN_FILENO))
		print_prompt();
 
	while (getline(&line, &n, stdin) != -1)
	{
		/* TEMP TO EXIT */
		if (line[0] == 'e')
		{
			if (line)
				free(line);
			exit(0);
		}
		/* parse user input */
		tokens = parse_input(line);
		/* execute user input */
		return_status = execute(tokens);
		printf("return_status: %d\n", return_status);
		/* free up memory */
		free_tokens(tokens);
	  
		/* free(tokens); */
		tokens = NULL;

		if (isatty(STDIN_FILENO))
			print_prompt();
	}
/*	if (tokens)
		free_tokens(tokens);
*/
	return (return_status);
}
