/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:27:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 13:47:34 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_utils.h"
#include "ps_operations.h"

void	take_shorter(t_stack **stack, char stk)
{
	int		shorter;
	int		len;
	t_stack	*tmp;
	int		i;

	if (!*stack)
		return ;
	len = ps_stksize(*stack);
	take_min_n_max(*stack, &shorter, 0);
	tmp = *stack;
	i = 1;
	while (tmp->idx != shorter)
	{
		i ++;
		tmp = tmp->next;
	}
	if (i <= (len / 2 + 1))
		while ((**stack).idx != shorter)
			rx(stack, 0, stk);
	else
		while ((**stack).idx != shorter)
			rrx(stack, 0, stk);
}
