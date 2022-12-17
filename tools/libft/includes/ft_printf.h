/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:13:30 by thfirmin          #+#    #+#             */
/*   Updated: 2022/12/11 21:36:47 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MASK "cspdiuxX%"
# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);

int	ft_puthex_fd(long unsigned int hex, char mode, int fd);
int	ft_putunbr_fd(unsigned int unbr, int fd);

#endif
