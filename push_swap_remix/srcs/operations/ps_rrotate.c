/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:34:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/07 14:52:31 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

void	rrx(t_stack **stk1, t_stack **stk2, char stk)
{
	char	step[4];
	t_stack	*node;

	if (*stk1 && (**stk1).next)
	{
		node = *stk1;
		while (node->next->next)
			node = node->next;
		ps_stkadd_front(stk1, node->next);
		node->next = 0;
	}
	if (*stk2 && (**stk2).next)
	{
		node = *stk2;
		while (node->next->next)
			node = node->next;
		ps_stkadd_front(stk2, node->next);
		node->next = 0;
	}
	step[0] = 'r';
	step[1] = 'r';
	step[2] = stk;
	step[3] = '\0';
	if ((*stk1 && (**stk1).next) || (*stk2 && (**stk2).next))
		ft_putendl_fd(step, 1);
}
