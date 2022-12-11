/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stklast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:53:40 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/21 22:54:20 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

t_stack	*ps_stklast(t_stack *stack)
{
	if (!stack)
		return (0);
	while ((*stack).next)
		stack = (*stack).next;
	return (stack);
}
