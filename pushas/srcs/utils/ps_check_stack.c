/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:05:10 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 00:05:37 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"
#include "libft.h"
#include <stdio.h>

void	ps_check_stack(t_stack *stka, t_stack *stkb)
{
	printf ("------------------------\n");
	while (stka || stkb)
	{
		if (stka)
			printf ("%d (%d)\t", stka->nbr, stka->idx);
		else
			printf ("  \t");
		if (stkb)
			printf ("%d (%d)\n", stkb->nbr, stkb->idx);
		else
			printf ("\n");
		if (stka)
			stka = stka->next;
		if (stkb)
			stkb = stkb->next;
	}
	printf ("\n\e[4mA\e[m\t\e[4mB\e[m\n");
	printf ("------------------------\n");
}
