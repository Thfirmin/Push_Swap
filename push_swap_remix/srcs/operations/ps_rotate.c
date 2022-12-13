/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:21 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/07 14:52:26 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

void	rx(t_stack **stk1, t_stack **stk2, char stk)
{
	char	step[3];
	t_stack	*node;

	if (*stk1 && (**stk1).next)
	{
		node = *stk1;
		*stk1 = node->next;
		node->next = 0;
		ps_stkadd_back(stk1, node);
	}
	if (*stk2 && (**stk2).next)
	{
		node = *stk2;
		*stk2 = node->next;
		node->next = 0;
		ps_stkadd_back(stk2, node);
	}
	step[0] = 'r';
	step[1] = stk;
	step[2] = '\0';
	if ((*stk1 && (**stk1).next) || (*stk2 && (**stk2).next))
		ft_putendl_fd(step, 1);
}
