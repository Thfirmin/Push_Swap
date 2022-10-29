/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stksize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 07:40:47 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/29 07:42:00 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

int	ps_stksize(t_stack *stack)
{
	int i;
	
	i = 0;
	if (!stack)
		return (i);
	while (stack)
	{
		stack = stack->next;
		i ++;
	}
	return (i);
}
