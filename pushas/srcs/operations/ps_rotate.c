/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 18:13:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

// Rotate stack taking the first node and putting in the end of list
void	rx(t_stack **stk1, t_stack **stk2, char stk)
{
	t_stack	*node;

	if (stk1 && (*stk1 && (**stk1).next))
	{
		node = *stk1;
		*stk1 = (**stk1).next;
		node->next = 0;
		ps_stkadd_back(stk1, node);
	}
	if (stk2 && (*stk2 && (**stk2).next))
	{
		node = *stk2;
		*stk2 = (**stk2).next;
		node->next = 0;
		ps_stkadd_back(stk2, node);
	}
	if ((stk2 && *stk2 && (**stk2).next) || (stk1 && *stk1 && (**stk1).next))
		if (stk)
			ft_printf("r%c\n", stk);
}
