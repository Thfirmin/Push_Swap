/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:34:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/25 21:33:53 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

static void	rrx(t_stack **stkx)
{
	t_stack	*elem;
	t_stack	*lst;

	elem = *stkx;
	if (!elem)
		return ;
	else if (!elem->next)
		return ;
	lst = ps_stklast(*stkx);
	while (elem->next != lst)
		elem = elem->next;
	elem->next = 0;
	ps_stkadd_front(stkx, lst);
}

void	rra(t_stack **stka)
{
	rrx(stka);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **stkb)
{
	rrx(stkb);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **stka, t_stack **stkb)
{
	rrx(stka);
	rrx(stkb);
	ft_putstr_fd("rrr\n", 1);
}
