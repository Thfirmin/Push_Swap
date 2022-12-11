/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:34:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 02:09:49 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

// Rotate stack taking the last node and putting in the begin of list
void	rrx(t_stack **stk1, t_stack **stk2, char stk)
{
	t_stack	*node;

	if (stk1 && (*stk1 && (**stk1).next))
	{
		node = *stk1;
		while (node->next->next)
			node = node->next;
		ps_stkadd_front(stk1, node->next);
		node->next = 0;
	}
	if (stk2 && (stk2 && (**stk2).next))
	{
		node = *stk2;
		while (node->next->next)
			node = node->next;
		ps_stkadd_front(stk2, node->next);
		node->next = 0;
	}
	if ((stk2 && *stk2 && (**stk2).next) || (stk1 && *stk1 && (**stk1).next))
		if (stk)
			ft_printf("rr%c\n", stk);
}
