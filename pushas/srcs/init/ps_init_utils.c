/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:03:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 03:33:11 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_init.h"
#include <stdio.h>

// Clear a splitted string properly
void	ps_free_split(char **splitted)
{
	int	i;

	i = -1;
	while (splitted[++i])
		free(splitted[i]);
	free(splitted);
	*splitted = 0;
}

// Verify prohibit letters and empty argument
int	ps_isalldigit(char *nbr)
{
	int	i;

	printf ("\"%s\"\n", nbr);
	if ((*nbr == '+') || (*nbr == '-'))
		nbr ++;
	if (!*nbr)
		return (0);
	i = -1;
	while (nbr[++i])
		if (!((nbr[i] >= '0') && (nbr[i] <= '9')))
			return (0);
	return (1);
}
