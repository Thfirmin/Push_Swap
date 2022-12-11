/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:00:06 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/21 23:02:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

void	ps_stkadd_back(t_stack **stack, t_stack *elem)
{
	t_stack	*lstelem;

	lstelem = ps_stklast(*stack);
	if (!lstelem)
		*stack = elem;
	else
		(*lstelem).next = elem;

}
