/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stkiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:41:47 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 13:53:09 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

void ps_stkiter(t_stack *stack, void (*f)(int *))
{
	while (stack)
	{
		if (f)
			f(&stack->nbr);
		stack = stack->next;
	}
}
