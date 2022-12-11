/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:39:58 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 21:42:50 by thfirmin         ###   ########.fr       */
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

void	ps_clear(t_stack **hstack, t_stack *stack)
{
	if (stack)
		ps_stkclear(&stack);
	if (hstack)
		free(hstack);
}

int		ps_tkidx(t_stack *stack, char *str, int idx)
{
	int	nbr;
	int	i;

	i = idx;
	nbr = ft_atoi(str);
	if (!stack)
		return (0);
	while (stack)
	{
		if ((stack->nbr > nbr) && (stack->idx < i))
			i = stack->idx;
		stack = stack->next;
	}
	return (i);
}

void	ps_plusone(t_stack **stack, int idx)
{
	t_stack	*elem;

	elem = *stack;
	if (!elem)
		return ;
	while (elem)
	{
		if (elem->idx >= idx)
			elem->idx ++;
		elem = elem->next;
	}
}
