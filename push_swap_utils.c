/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:39:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/22 00:49:12 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ps_split_clear(char **split)
{
	int i;

	i = 0;
	while (split[i])
	{
		free (split[i]);
		i ++;
	}
	free (split);
	split = 0;
}

int	ps_fill_arg(t_stack **stack, char **varg)
{
	int		i;
	t_stack	*elem;

	i = 0;
	while (varg[i])
	{
		elem = ps_stknew(ft_atoi(varg[i]));
		if (!elem)
			return (0);
		ps_stkadd_back(stack, elem);
		i ++;
	}
	return (1);
}
