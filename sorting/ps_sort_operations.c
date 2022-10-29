/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 01:49:48 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/29 01:55:15 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

void	ps_rotstack(t_stack **stack, int len)
{
	t_stack	*elem;
	int		i;

	i = 0;
	elem = *stack;
	while (elem->idx < elem->next->idx)
	{
		elem = elem->next;
		i ++;
	}
	if (i <= (len / 2))
	{
		while (i)
		{
			ra(stack);
			i --;
		}
	}
	else
	{
		while (i < len)
		{
			rra(stack);
			i ++;
		}
	}
}
