/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:15:42 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/13 16:26:55 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_UTILS_H
# define PS_UTILS_H

// Stack checking
void	ps_check_stack(t_stack *stka, t_stack *stkb);

// Error util
void	ps_error(char *message, t_stack **stack, int ret);

// Stack util
void	take_min_n_max(t_stack *stack, unsigned int *min, unsigned int *max);
void	ps_ab_stkclear(t_stack **stack);

// Push_swap utils
void	take_shorter(t_stack **stack, char stk);
void	picker(t_stack **stka, unsigned int min, unsigned int max, char stk);

#endif
