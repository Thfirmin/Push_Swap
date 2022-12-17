/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:31:59 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 22:33:57 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

// Take a node and put it in the begin of a gived list
void	ps_stkadd_front(t_stack **stack, t_stack *node)
{
	node->next = *stack;
	*stack = node;
}
