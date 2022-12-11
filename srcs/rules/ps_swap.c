/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:03:44 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/25 17:44:24 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"
#include <stdio.h>

static void	sx(t_stack **stkx)
{
	t_stack	*stk;
	t_stack	*del;

	stk = *stkx;
	if (!stk)
		return ;
	else if (!stk->next)
		return ;
	del = stk->next;
	(**stkx).next = (*stkx)->next->next;
	ps_stkadd_front(stkx, del);
}

void	sa(t_stack **stka)
{
	sx(stka);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **stkb)
{
	sx(stkb);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **stka, t_stack **stkb)
{
	sx(stka);
	sx(stkb);
	ft_putstr_fd("ss\n", 1);
}
