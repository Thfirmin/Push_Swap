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
#include "libft.h"

void	ps_chunks(t_stack **stka, t_stack **stkb, int len)
{
	int				chunk;
	int				i;
	//unsigned int	min;
	unsigned int	max;
	
	/*chunk = ((len * (10 / 100)) / 2 + 1);
	min = (len / 2);
	max = (len / 2);*/
	chunk = ((10 * len) / 100);
	if (chunk < 1)
		chunk = 1;
	max = chunk;
	while (*stka)
	{
		//min -= chunk;
		i = 0;
		while (*stka && (i < chunk))
		{
			//picker(stka, 0, max, 'a');
			//px(stka, stkb, 0);
			//i ++;
			if ((**stka).idx <= max)
			{
				px(stka, stkb, 'b');
				i++;
			}
			else
			{
				rx(stka, 0 , 'a');
				//ft_printf("Value: %u e max: %d e len: %d\n", (**stka).idx, max, len);
			}
		}
		max += chunk;
	}
	while (*stkb && (--len > -1))
	{
		picker(stkb, len, len, 'b');
		px(stkb, stka, 'a');
	}
}
