#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft/libft.h"

int	main(int argc, const char **argv, const char **envp)
{
	int		envlen;
	char	*env;
	char	**paths;

	for (int i = 0; envp[i]; i++)
	{
		if (!ft_strncmp(envp[i], "PATH=", 5))
			env = ft_strdup(envp[i]);
	}
	paths = ft_split(env, ':');
	for (int i = 0; paths[i]; i ++)
		printf ("%s\n", paths[i]);
	for (int i = 0; paths[i]; i++)
		free (paths[i]);
	free (paths);
	free (env);
	return (0);
}
