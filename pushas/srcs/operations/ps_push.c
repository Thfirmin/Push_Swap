/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:12:05 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 18:12:44 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"

// Move the first node of stk1 and put it in front of stk2
void	px(t_stack **stk1, t_stack **stk2, char stk)
{
	t_stack *node;

	if (!*stk1)
		return ;
	node = *stk1;
	*stk1 = (**stk1).next;
	node->next = 0;
	ps_stkadd_front(stk2, node);
	(void) stk;
	if (stk)
		ft_printf("p%c\n", stk);
}
