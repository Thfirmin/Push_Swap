/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:57:25 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/21 23:38:40 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

void	ps_stkclear(t_stack **stack)
{
	t_stack	*next;
	if (!stack)
		return ;
	while (*stack)
	{
		next = (**stack).next;
		ps_stkdelone(*stack);
		*stack = next;
	}
}
