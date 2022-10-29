/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:06:23 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/29 09:27:39 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

int	ps_ispsorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ps_issemi_sorted(t_stack *stack)
{
	while (stack->next)
	{

		if ((stack->idx > stack->next->idx) && (stack->next->next))
			return (0);
		if ((stack->nbr > stack->next->nbr) && (!stack->next->next))
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ps_issorted(t_stack *stack, int max, int min)
{
	int	p1;
	int	p2;

	if (!stack->next)
		return (1);
	p1 = stack->idx;
	while (stack->next)
	{
		if(stack->idx > stack->next->idx)
		{
			if ((stack->idx == max) && (stack->next->idx == min))
			{
				stack = stack->next;
				continue ;
			}
			else
				return (0);
		}
		else
			stack = stack->next;
	}
	p2 = stack->idx;
	if (p1 > p2)
		return (1);
	return (0);
}
