/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/25 21:22:35 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

static void	rx(t_stack **stkx)
{
	t_stack	*elem;

	elem = *stkx;
	if (!elem)
		return ;
	else if (!elem->next)
		return ;
	*stkx = elem->next;
	elem->next = 0;
	ps_stkadd_back(stkx, elem);
}

void	ra(t_stack **stka)
{
	rx(stka);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **stkb)
{
	rx(stkb);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **stka, t_stack **stkb)
{
	rx(stka);
	rx(stkb);
	ft_putstr_fd("rr\n", 1);
}
