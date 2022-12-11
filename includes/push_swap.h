/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:54:53 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/02 17:07:43 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ps_stack.h"

// Main
int		ps_fill_stack(t_stack **stack, int argc, char *argv[]);
int		ps_fill_arg(t_stack **stack, char **varg);
void	ps_error(t_stack **hstack, t_stack *stack);

// Utils
void	ps_split_clear(char **split);
void	ps_clear(t_stack **hstack, t_stack *stack);
int		ps_tkidx(t_stack *stack, char *str, int idx);
void	ps_plusone(t_stack **stack, int idx);

// Valid
int	ps_isvalid(t_stack *stack, char *nbr);
int	ps_isalldigit(char *nbr);
int	ps_isint(char *nbr);
int	ps_isunique(t_stack *stack, char *nbr);
int	ps_islesser(t_stack *stack, char *nbr);

// Sorting
void	push_swap(t_stack **stka, t_stack **stkb, int len);

// Stack Status
int	ps_issorted(t_stack *stack);
int	ps_isssorted(t_stack *stack);
int	ps_isordered(t_stack *stack);

// Sorting Operations
void	ps_rotstack(t_stack **stack, int len, int min);
void	ps_pickproblem(t_stack **stack);
void	ps_deliver_step(t_stack **stka, t_stack **stkb);
int		ps_shorter_idx(t_stack *stkx);

// Checking
void	check_stack(t_stack *stka, t_stack *stkb);

#endif
