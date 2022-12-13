/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:03:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 18:21:18 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_init.h"
#include "libft.h"

// Clear a splitted string properly
void	ps_free_split(char **splitted)
{
	int	i;

	i = -1;
	while (splitted[++i])
		free(splitted[i]);
	free(splitted);
}

// Verify prohibit letters and empty argument
int	ps_isalldigit(char *nbr)
{
	int	i;

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

int	ps_isint(char *nbr)
{
	long long int	n;

	if (ft_strlen(nbr) > 11)
		return (0);
	n = ft_atoi(nbr);
	if ((n > MAX) || (n < MIN))
		return (0);
	return (1);
}

int	ps_isunique(t_stack *stack, char *nbr)
{
	int	num;

	num = ft_atoi(nbr);
	if (!stack)
		return (1);
	while (stack)
	{
		if (stack->nbr == num)
			return (0);
		stack = stack->next;
	}
	return (1);
}
