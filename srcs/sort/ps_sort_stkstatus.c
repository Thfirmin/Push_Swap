/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_stkstatus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:06:23 by thfirmin          #+#    #+#             */
/*   Updated: 2022/11/30 07:56:59 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

static void	take_min_n_max(t_stack *stack, int *min, int *max);

int	ps_issorted(t_stack *stack)
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

int	ps_isssorted(t_stack *stack)
{
	while (stack->next)
	{

		if ((stack->idx > stack->next->idx) && (stack->next->next))
			return (0);
		if ((stack->idx > stack->next->idx) && (!stack->next->next))
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ps_isordered(t_stack *stack)
{
	int	p1;
	int	min;
	int	max;

	if (!stack->next)
		return (1);
	p1 = stack->idx;
	take_min_n_max(stack, &min, &max);
	while (stack->next)
	{
		if(stack->idx > stack->next->idx)
		{
			if ((stack->idx == max) && (stack->next->idx == min))
				stack = stack->next;
			else
				return (0);
		}
		else
			stack = stack->next;
	}
	if (p1 > stack->idx)
		return (1);
	return (0);
}

static void	take_min_n_max(t_stack *stack, int *min, int *max)
{
	if (!stack)
		return ;
	*min = stack->idx;
	*max = stack->idx;
	while (stack)
	{
		if (*min > stack->idx)
			*min = stack->idx;
		if (*max < stack->idx)
			*max = stack->idx;
		stack = stack->next;
	}
}
