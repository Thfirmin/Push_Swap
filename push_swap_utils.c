/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:39:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 14:02:45 by thfirmin         ###   ########.fr       */
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
	static int		idx;
	int				i;
	t_stack			*elem;

	i = 0;
	while (varg[i])
	{
		elem = 0;
		if (ps_isvalid(*stack, varg[i]))
		{
			if (ps_islesser(*stack, varg[i]))
			{
				elem = ps_stknew(ft_atoi(varg[i]), 0);
				ps_stkiter(*stack, ps_plusone);
			}
			else
				elem = ps_stknew(ft_atoi(varg[i]), idx);	
		}
		if (!elem)
			return (0);
		ps_stkadd_back(stack, elem);
		i ++;
		idx ++;
	}
	return (1);
}

void	ps_clear(t_stack **hstack, t_stack *stack)
{
	if (stack)
		ps_stkclear(&stack);
	if (hstack)
		free(hstack);
}

void	ps_plusone(int *nbr)
{
	*nbr = *nbr + 1;
}
