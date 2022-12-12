/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_init.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:30:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/12 01:31:47 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_INIT_H
# define PS_INIT_H
# ifndef MAX
#  define MAX 2147483647
# endif
# ifndef MIN
#  define MIN -2147483648
# endif
#include "ps_stack.h"

t_stack	**ps_init(int argc, char *argv[]);
void	ps_free_split(char **splitted);
int		ps_isalldigit(char *nbr);
int		ps_isint(char *nbr);

#endif
