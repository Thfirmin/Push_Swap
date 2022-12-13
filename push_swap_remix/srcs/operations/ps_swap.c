/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:03:44 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/07 14:56:20 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"

void	sx(t_stack **stk1, t_stack **stk1, char stk)
{
	char	step[3];
	t_stack	*node;

	if (*stk1 && (**stk1).next)
	{
		node = (**stk1).next;
		(**stk1).next = node->next;
		ps_stkadd_front(stk1, node);
	}
	if (*stk2 && (*stk2).next)
	{
		node = (**stk2).next;
		(**stk2).next = node->next;
		ps_stkadd_front(stk2, node);
	}
	step[0] = 's';
	step[1] = stk;
	step[2] = '\0';
	if ((*stk1 && (**stk1).next) || (*stk2 && (**stk2).next))
		ft_putendl_fd(step, 1);
}
