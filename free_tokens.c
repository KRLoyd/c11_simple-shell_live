#include "shell.h"
#include <stdlib.h>

void free_tokens(char **tokens)
{
	unsigned int counter = 1;

	if(tokens)
	{
		while (tokens[counter] != NULL)
		{
			free(tokens[counter]);
			tokens[counter] = NULL;
			counter++;
		}
	}
	/* free(tokens); */
	/* tokens = NULL;*/
}
