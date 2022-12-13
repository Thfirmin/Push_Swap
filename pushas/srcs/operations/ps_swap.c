/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:03:44 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 18:13:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"

// Change the position of first and second node receiving each position
void	sx(t_stack **stk1, t_stack **stk2, char stk)
{
	t_stack	*node;

	if (stk1 && (*stk1 && (**stk1).next))
	{
		node = (**stk1).next;
		(**stk1).next = (**stk1).next->next;
		node->next = *stk1;
		*stk1 = node;
	}
	if (stk2 && (*stk2 && (**stk2).next))
	{
		node = (**stk2).next;
		(**stk2).next = (**stk2).next->next;
		node->next = *stk2;
		*stk2 = node;
	}
	if ((stk2 && *stk2 && (**stk2).next) || (stk1 && *stk1 && (**stk1).next))
		if (stk)
			ft_printf("s%c\n", stk);
}
