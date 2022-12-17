/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:05:10 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 22:17:06 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"

// Debbug tree of contents of stacks A & B
void	ps_check_stack(t_stack *stka, t_stack *stkb)
{
	ft_printf ("------------------------\n");
	while (stka || stkb)
	{
		if (stka)
			ft_printf ("%d (%d)\t", stka->nbr, stka->idx);
		else
			ft_printf ("  \t");
		if (stkb)
			ft_printf ("%d (%d)\n", stkb->nbr, stkb->idx);
		else
			ft_printf ("\n");
		if (stka)
			stka = stka->next;
		if (stkb)
			stkb = stkb->next;
	}
	ft_printf ("\n\e[4mA\e[m\t\e[4mB\e[m\n");
	ft_printf ("------------------------\n");
}
