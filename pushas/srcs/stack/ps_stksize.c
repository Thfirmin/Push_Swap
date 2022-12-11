/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stksize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 07:40:47 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/10 22:35:23 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

// Iterate a list and give the size of that
int	ps_stksize(t_stack *stack)
{
	int i;
	
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i ++;
	}
	return (i);
}
