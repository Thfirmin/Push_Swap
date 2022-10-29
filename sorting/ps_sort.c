/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:00:18 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/29 01:57:59 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

void	push_swap(t_stack **stka, t_stack **stkb, int len)
{
	int	minidx;

	minidx = 0;
	(void) minidx;
	if (ps_ispsorted(*stka))
		return ;
	(void)stkb;
	while (!ps_ispsorted(*stka))
	{
		if (ps_issorted(*stka, len))
			ps_rotstack(stka, (len + 1));
		else if (ps_issemi_sorted(*stka))
		{
			return ;
		}
		else if ((**stka).nbr > (**stka).next->nbr)
			sa(stka);
		else if ((**stka).idx == minidx)
		{
			pb(stka, stkb);
			minidx ++;
		}
	}
	if (stkb)
		return;
	return ;
}
