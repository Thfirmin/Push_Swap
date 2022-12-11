/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:57:25 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 22:34:15 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

// Erase a list
void	ps_stkclear(t_stack **stack)
{
	t_stack	*nxt_node;

	if (!stack)
		return ;
	while (*stack)
	{
		nxt_node = (**stack).next;
		ps_stkdelone(*stack);
		*stack = nxt_node;
	}
}
