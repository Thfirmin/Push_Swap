/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_chunks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:13:24 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/14 20:53:26 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Chunks sorting algorithm
void	ps_chunks(t_stack **stka, t_stack **stkb, int len)
{
	int				chunk;
	int				i;
	unsigned int	max;

	chunk = ((10 * len) / 100);
	if (chunk < 1)
		chunk = 1;
	max = chunk;
	while (*stka)
	{
		i = 0;
		while (*stka && (i < chunk))
		{
			if ((**stka).idx <= max && ++i)
				px(stka, stkb, 'b');
			else
				rx(stka, 0, 'a');
		}
		max += chunk;
	}
	while (*stkb && (--len > -1))
	{
		picker(stkb, len, len, 'b');
		px(stkb, stka, 'a');
	}
}
