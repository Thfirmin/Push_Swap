/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkstatus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:38:54 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/12 12:35:01 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_utils.h"
#include "libft.h"

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

int	ps_isordered(t_stack *stack)
{
	int	min;
	int	max;
	int	frst_idx;

	frst_idx = stack->idx;
	take_min_n_max(stack, &min, &max);
	while (stack->next)
	{
		if (stack->idx < stack->next->idx)
			stack = stack->next;
		else if ((stack->idx == max) && (stack->next->idx == min))
			stack = stack->next;
		else
			return (0);
	}
	if (frst_idx > stack->idx)
		return (1);
	return (0);
}
