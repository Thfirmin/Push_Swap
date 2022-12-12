/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:31:30 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/12 11:41:33 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ps_stack.h"
# include "ps_operations.h"
# include "ps_init.h"
# include "ps_utils.h"

void	push_swap(t_stack **stack);

int		ps_issorted(t_stack *stack);
int		ps_isordered(t_stack *stack);

#endif
