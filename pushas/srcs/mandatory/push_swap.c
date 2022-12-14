/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:31:20 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/14 18:49:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_sort_five(t_stack **stka, t_stack **stkb);

static void	ps_sort_three(t_stack **stka);

void	push_swap(t_stack **stack)
{
	int	len;

	len = ps_stksize(stack[A]);
	if (len <= 3)
		ps_sort_three(&stack[A]);
	else if (len <= 5)
		ps_sort_five(&stack[A], &stack[B]);
	else
		ps_chunks(&stack[A], &stack[B], len);
}

static void	ps_sort_three(t_stack **stka)
{
	while (!ps_issorted(*stka))
	{
		if (ps_isordered(*stka) && ((**stka).idx < (**stka).next->idx))
			rrx(stka, 0, 'a');
		else if (ps_isordered(*stka) && ((**stka).idx > (**stka).next->idx))
			rx(stka, 0, 'a');
		else
			sx(stka, 0, 'a');
	}
}

static void	ps_sort_five(t_stack **stka, t_stack **stkb)
{
	unsigned int	min;

	while (!ps_issorted(*stka))
	{
		take_min_n_max(*stka, &min, 0);
		picker(stka, min, min, 'a');
		px(stka, stkb, 'b');
		if (ps_stksize(*stka) == 3)
			ps_sort_three(stka);
	}
	while (*stkb)
		px(stkb, stka, 'a');
}

