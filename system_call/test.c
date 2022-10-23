#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, const char **argv, const char **envp)
{
	int		envlen;
	char	*env;
	char	**paths;

	for (int i = 0; envp[i]; i++)
	{
		if (!strncmp(envp[i], "PATH=", 5))
		{
			envlen = strlen(envp[i]);
			env = malloc(envlen + 1);
			strlcpy(env, envp[i], (envlen + 1));
		}
	}
	paths = split(env, ':');
	for (int i = 0; paths[i]; i ++)
		printf ("%s\n", paths[i]);
	free (env);
	return (0);
}
