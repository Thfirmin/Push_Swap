#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

void	system_call(char **path, const char **envp);

int	main(int argc, const char **argv, const char **envp)
{
	int		envlen;
	int		len = 0;
	char	*env;
	char	**paths;
	char	**pathss;
	char	*command;

	if (argc != 2)
		return (1);

	command = ft_strjoin("/", argv[1]);
	for (int i = 0; envp[i]; i++)
	{
		if (!ft_strncmp(envp[i], "PATH=", 5))
			env = ft_strdup(envp[i]);
	}
	paths = ft_split(env, ':');
	for (int i = 0; paths[i]; i ++)
		len ++;
	pathss = malloc(sizeof(char *) * (len + 1));
	if (!pathss)
		return (1);
	for (int i = 0; paths[i]; i ++)
	{
		if (!i)
			pathss[i] = ft_strjoin(paths[i] + 5, command);
		else
			pathss[i] = ft_strjoin(paths[i], command);
	}
	pathss[len] = 0;
	system_call(pathss, envp);
	for (int i = 0; paths[i]; i++)
		free (paths[i]);
	for (int i = 0; pathss[i]; i ++)
		free (pathss[i]);
	free (pathss);
	free (paths);
	free (env);
	free (command);
	return (0);
}

void	system_call(char **path, const char **envp)
{
	char *cmd[] = {"ls", "-l", NULL};
	char *env[] = {NULL};

	for (int i = 0; path[i]; i ++)
	{
		if (!(access(path[i], F_OK | X_OK)))
		{
			if (execve(path[i], cmd, env) < 0)
				perror ("Could not execute comand");
		}
	}
	printf ("NON EXIST\n");
}
