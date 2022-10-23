/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:54:53 by thfirmin          #+#    #+#             */
/*   Updated: 2022/10/23 10:47:21 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ps_stack.h"

// Main
int		ps_fill_stack(t_stack **stack, int argc, char *argv[]);
void	ps_error(t_stack **hstack, t_stack *stack);

// Utils
void	ps_split_clear(char **split);
int		ps_fill_arg(t_stack **stack, char **varg);
void	ps_clear(t_stack **hstack, t_stack *stack);

// Valid
int	ps_isvalid(t_stack *stack, char *nbr);
int	ps_isalldigit(char *nbr);
int	ps_isint(char *nbr);
int	ps_isunique(t_stack *stack, char *nbr);

#endif
