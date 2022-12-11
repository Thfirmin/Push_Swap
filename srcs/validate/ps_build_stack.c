/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_build_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 07:57:50 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/03 08:06:02 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_stack.h"

t_stack	**ps_build_stack(int argc, char *argv)
{
	t_stack	**stack;

	stack = malloc(2 * sizeof(t_stack *));
	if (!stack)
		return (0);
}
