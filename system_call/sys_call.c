/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys_call.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:39:43 by thfirmin          #+#    #+#             */
/*   Updated: 2022/11/02 13:52:33 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sys_call.h"

char	**take_args(int argc, char *argv[]);

char	*take_access(char **path, char *binary);

void	free_split(char **split);

char	**take_pathway(char **envp);

int	sys_call(int argc, char *argv[], char *envp[])
{
	char	**path;
	char	*pathway;
	char	**cmd;

	if (argc < 2)
		return (0);
	path = take_pathway(envp);
	if (!path)
		return (-1);
	pathway = take_access(path, argv[1]);
	cmd = take_args(argc, argv);
	if (!pathway || !cmd)
	{
		if (pathway)
			free (pathway);
		free_split(path);
		free_split(cmd);
		return (-1);
	}
	execve(pathway, cmd, path);
	free_split(path);
	return (0);
}

char	**take_pathway(char **envp)
{
	int		i;
	char	*env_path;
	char	**ret_path;

	i = 0;
	ret_path = 0;
	env_path = 0;
	while (envp[i])
	{
		if (!ft_strncmp(envp[i], "PATH=", 5))
		{
			env_path = envp[i];
			env_path += 5;
		}
		i ++;
	}
	if (env_path)
		ret_path = ft_split(env_path, ':');
	return (ret_path);
}

void	free_split(char **split)
{
	int i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free (split[i]);
		i ++;
	}
	free (split);
}

char	*take_access(char **path, char *binary)
{
	char	*pathway;
	char	*bin;
	int		i;

	i = 0;
	bin = ft_strjoin("/", binary);
	if (!bin)
		return (0);
	while (path[i])
	{
		pathway = ft_strjoin(path[i], bin);
		if (!access(pathway, F_OK | X_OK))
		{
			free (bin);
			return (pathway);
		}
		free (pathway);
		i ++;
	}
	free (bin);
	return (0);
}

char	**take_args(int argc, char *argv[])
{
	char	**cmd;
	int		i;

	i = 1;
	cmd = malloc(sizeof(char *) * argc);
	if (!cmd)
		return (0);
	while (i < argc)
	{
		cmd[(i - 1)] = ft_strdup(argv[i]);
		if (!cmd[(i - 1)])
		{
			i --;
			while (i > 1)
				free (cmd[(i-- - 1)]);
			free (cmd);
			return (0);
		}
		i ++;
	}
	cmd[(i - 1)] = (void *)0;
	return (cmd);
}
