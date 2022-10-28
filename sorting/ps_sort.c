/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:00:18 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 13:48:05 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "ps_rules.h"

void	push_swap(t_stack **stka, t_stack **stkb)
{
	if (ps_issorted(*stka))
		return ;
	(void)stkb;
	/*while (!ps_ispsorted(stka))
	{
		if (ps_issorted)
		{
			return ;
		}
	}
	if (stkb)
	{
		return;
	}*/
	return ;
}
