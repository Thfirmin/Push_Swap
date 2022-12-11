/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:00:18 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/02 17:07:25 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

static void	ps_chunks_sorting(t_stack **stka, t_stack **stkb, int len);

static void	ps_sorting_five(t_stack **stka, t_stack **stkb);

static void	ps_sorting_three(t_stack **stka);

void	push_swap(t_stack **stka, t_stack **stkb, int len)
{
	if (ps_issorted(*stka))
		return ;
	else if (len <= 3)
		ps_sorting_three(stka);
	else if (len <= 5)
		ps_sorting_five(stka, stkb);
	else 
		ps_chunks_sorting(stka, stkb, len);
}

static void	ps_sorting_three(t_stack **stka)
{
	while (!ps_issorted(*stka))
	{
		if (ps_isordered(*stka) && ((**stka).idx < (**stka).next->idx))
			rra(stka);
		else if (ps_isordered(*stka) && ((**stka).idx > (**stka).next->idx))
			ra(stka);
		else
			sa(stka);
	}
}

static void	ps_sorting_five(t_stack **stka, t_stack **stkb)
{
	while (!ps_issorted(*stka))
	{
		if (ps_stksize(*stka) == 3)
			ps_sorting_three(stka);
		else if (ps_shorter_idx(*stka) == (**stka).idx)
			pb(stka, stkb);
		else if (ps_issorted(*stka))
			while (ps_isssorted(*stka) && !ps_issorted(*stka))
				ra(stka);
		else
			ra(stka);
	}
	while (*stkb)
		pa(stka, stkb);
}

static void	ps_chunks_sorting(t_stack **stka, t_stack **stkb, int len)
{
	(void) stka;
	(void) stkb;
	ft_printf("chunks sorting with %d\n", len);
}
