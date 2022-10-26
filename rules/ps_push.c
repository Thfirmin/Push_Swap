/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:12:05 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/25 17:42:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"
#include <stdio.h>

static void	px(t_stack **stkx, t_stack **stky)
{
	t_stack *del;
	t_stack	*next;

	del = *stky;
	if (!del)
		return ;
	next = del->next;
	*stky = next;
	ps_stkadd_front(stkx, del);
}

void	pa(t_stack **stkb, t_stack **stka)
{
	px(stka, stkb);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **stka, t_stack **stkb)
{
	px(stkb, stka);
	ft_putstr_fd("pb\n", 1);
}
