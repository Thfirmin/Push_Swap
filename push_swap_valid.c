/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 00:41:14 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/28 13:38:28 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	ps_isvalid(t_stack *stack, char *nbr)
{
	if (!ps_isalldigit(nbr))
		return (0);
	else if (!ps_isint(nbr))
		return (0);
	else if (!ps_isunique(stack, nbr))
		return (0);
	return (1);
}

int	ps_isalldigit(char *nbr)
{
	if ((*nbr == '-') || (*nbr == '+'))
		nbr ++;
	while (*nbr)
		if (!ft_isdigit(*nbr++))
			return (0);
	return (1);
}

int	ps_isint(char *nbr)
{
	ssize_t	num;

	num = ft_strlen(nbr);
	if ((*nbr == '-') || (*nbr == '+'))
		num --;
	if (num > 10)
		return (0);
	num = ft_atoi(nbr);
	if ((num < -2147483648) || (num > 2147483647))
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

int	ps_islesser(t_stack *stack, char *nbr)
{
	int	num;

	num = ft_atoi(nbr);
	while (stack)
	{
		if (num >= stack->nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}
