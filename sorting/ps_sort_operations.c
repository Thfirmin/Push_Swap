/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 01:49:48 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/29 07:49:46 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

void	ps_rotstack(t_stack **stack, int len, int min)
{
	t_stack	*elem;
	int		i;

	elem = *stack;
	if (!elem->next)
		return ;
	i = 0;
	while (elem->idx < elem->next->idx)
	{
		elem = elem->next;
		i ++;
	}
	i ++;
	if (i > (len / 2))
		while ((**stack).idx != min)
			rra(stack);
	else
		while ((**stack).idx != min)
			ra(stack);
}

void	ps_pickproblem(t_stack **stack)
{
	while ((**stack).idx < (**stack).next->idx)
		ra(stack);
}

void	ps_deliver_step(t_stack **stka, t_stack **stkb)
{
	while (*stkb)
	{
		pa(stkb, stka);
	}
}
