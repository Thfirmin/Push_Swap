/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:31:37 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/12 12:36:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

// Take bigger and shorter index of a stack
void	take_min_n_max(t_stack *stack, int *min, int *max)
{
	if (!stack)
		return ;
	if (min)
		*min = stack->idx;
	if (max)
		*max = *min;
	while (stack)
	{
		if (min && (*min > stack->idx))
			*min = stack->idx;
		if (max && (*max < stack->idx))
			*max = stack->idx;
		stack = stack->next;
	}
}

// Clear stacks A and B properly
void	ps_ab_stkclear(t_stack **stack)
{
	if (stack[A])
		ps_stkclear(&stack[A]);
	if (stack[B])
		ps_stkclear(&stack[B]);
	free(stack);
}
