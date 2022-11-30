/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:00:18 by thfirmin          #+#    #+#             */
/*   Updated: 2022/11/30 07:58:20 by thfirmin         ###   ########.fr       */
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
	else if (ps_isordered(*stka))
		ft_printf("is ordered!\n");
	else if (len <= 3)
		ps_sorting_three(stka);
	else if (ps_isssorted(*stka))
		ft_printf("is semi sorted!\n");
	else if (len <= 5)
		ps_sorting_five(stka, stkb);
	else 
		ps_chunks_sorting(stka, stkb, len);
}

static void	ps_sorting_three(t_stack **stka)
{
	ft_printf ("Sorting three or less elements");
	(void) stka;
	return ;
}

static void	ps_sorting_five(t_stack **stka, t_stack **stkb)
{
	ft_printf ("Sorting five or less elements");
	(void) stka;
	(void) stkb;
	return ;
}

static void	ps_chunks_sorting(t_stack **stka, t_stack **stkb, int len)
{
	(void) stka;
	(void) stkb;
	ft_printf("chunks sorting with %d\n", len);
}
