#include "shell.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char **parse_input(char *input)
{
	char **all_tokens = NULL;
	char *token = NULL;
	unsigned int token_count = 0;
	unsigned int possible_tokens = 5;


	if (!input)
		return (all_tokens);

	all_tokens = malloc(sizeof(char *) * possible_tokens);
	if (!all_tokens)
		return (all_tokens);
	
	token = strtok(input, WHITESPACE);

	while (token)
	{
		printf("token in while loop: %s\n", token);
		token_count++;
		if (token_count == possible_tokens)
		{
			/* reallocate tokens */
		}
		all_tokens[token_count - 1] = token;
		token = strtok(NULL, WHITESPACE);
	}
	all_tokens[token_count] = NULL;
	return (all_tokens);
}
