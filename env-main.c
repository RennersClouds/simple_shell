#include <stdio.h>

/**
 * main - prints the environment ucing the env parameter from the main function
 *
 * @ac: argument to main
 * @**av: argument to main
 * @**env: argument to main
 * @env: argument to the main
 * @av: argument to the main
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
