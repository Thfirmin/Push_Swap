/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:12:05 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/07 14:57:24 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ps_stack.h"

void	px(t_stack **stk_src, t_stack **stk_dst, char stk)
{
	char	step[3];
	t_stack	*node;

	if (!*stk_src)
		return ;
	step[0] = 'p';
	step[1] = stk;
	step[2] = '\0';
	node = *stk_src;
	*stk_src = node->next;
	node->next = 0;
	ps_stkadd_front(stk_dst, node);
	ft_putendl_fd(step, 1);
}
