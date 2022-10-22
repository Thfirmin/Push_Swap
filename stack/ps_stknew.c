/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:42:31 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/21 22:54:29 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

t_stack	*ps_stknew(int nbr)
{
	t_stack	*newstk;

	newstk = malloc(sizeof(t_stack));
	if (!newstk)
		return (0);
	(*newstk).nbr = nbr;
	(*newstk).next = (void *)0;
	return (newstk);
}

