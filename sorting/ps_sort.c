/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:00:18 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/29 09:11:27 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

void	push_swap(t_stack **stka, t_stack **stkb, int len)
{
	int	minidx;

	(void) len;
	minidx = 0;
	(void) minidx;
	if (ps_ispsorted(*stka))
		return ;
	(void)stkb;
	while (!ps_ispsorted(*stka))
	{
		if (ps_issorted(*stka, len, minidx))
			ps_rotstack(stka, ps_stksize(*stka), minidx);
		else if (ps_issemi_sorted(*stka))
			ps_pickproblem(stka);
		else if ((**stka).nbr > (**stka).next->nbr)
			sa(stka);
		else if ((**stka).idx == minidx)
		{
			pb(stka, stkb);
			minidx ++;
		}
	}
	if (stkb)
		ps_deliver_step(stka, stkb);
	return ;
}
