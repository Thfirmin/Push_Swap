/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:27:34 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/12 13:00:07 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "ps_utils.h"
#include "ps_operations.h"

void	take_shorter(t_stack **stack, char stk)
{
	int		shorter;

	take_min_n_max(*stack, &shorter, 0);
	while ((**stack).idx != shorter)
		rx(stack, 0, stk);
}
