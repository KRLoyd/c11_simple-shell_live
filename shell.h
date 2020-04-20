#ifndef _SHELL_
#define _SHELL_

/* Type Definitions */

/* Macros */
#define EXIT_SUCCESS 0
#define PROMPT "(> ''>) shellyeah$ "
#define WHITESPACE " \n\r\t"

/* Prototypes */
void print_prompt();
char **parse_input(char *input);
void free_tokens(char **tokens);
int execute(char **tokens);

#endif /* _SHELL_ */
