/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:00:06 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 22:33:41 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

// Take a node and put it in the end of gived list
void	ps_stkadd_back(t_stack **stack, t_stack *node)
{
	t_stack	*lst_node;

	lst_node = ps_stklast(*stack);
	if (!lst_node)
		*stack = node;
	else
		(*lst_node).next = node;
}
