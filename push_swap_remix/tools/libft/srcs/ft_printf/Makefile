# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thino <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 03:44:47 by thino             #+#    #+#              #
#    Updated: 2022/10/21 23:34:51 by thfirmin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAME

NAME	= libftprintf.a
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 SOURCE FILES

LIB		= ../../includes

SRCS	= ft_printf.c    \
		  ft_puthex_fd.c \
		  ft_putptr_fd.c \
		  ft_putunbr_fd.c
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                 OBJECT FILES

OBJS	= $(SRCS:.c=.o)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES

RM			= rm -rf
AR			= ar rcs
CC			= cc
INCLUDE		= -I $(LIB)
CFLAGS		= -g -Wall -Wextra -Werror
MAKEFLAGS	+= --silent
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                  TEXT CODES

BLANK		= \033[m
RED			= \033[38;5;9m
YELLOW		= \033[38;5;11m
GREEN		= \033[38;5;2m
BLUE		= \033[38;5;6m
PURPLE		= \033[38;5;5m
PINK		= \033[38;5;13m
WHITE		= \033[38;5;15m

BOLD		= \033[1m
SHADOW		= \033[2m
ITALIC		= \033[3m
UNDLINE		= \033[4m
UPPLINE		= \033[53m
DUNDLINE	= \033[21m
CENSORED	= \033[9m
UPALIGN		= \033[73m
DWALIGN		= \033[74m
FULLER		= \033[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	checking $(OBJS)
	printf "[$(BLUE)$(UNDLINE)Objects of $(NAME)$(BLANK)] $(GREEN)Has Been $(BOLD)Compiled!$(BLANK)\n"
	$(AR) $(NAME) $(OBJS)
	printf "[$(BLUE)$(UNDLINE)$(NAME)$(BLANK)] $(GREEN)Has Been $(BOLD)Created!$(BLANK)\n"

clean:
	$(RM) $(OBJS)
	printf "[$(BLUE)$(UNDLINE)Objects of $(NAME)$(BLANK)] $(YELLOW)Has Been $(BOLD)Deleted!$(BLANK)\n"


fclean:		clean
	$(RM) $(NAME)
	printf "[$(BLUE)$(UNDLINE)$(NAME)$(BLANK)] $(RED)Has Been $(BOLD)Deleted!$(BLANK)\n"

re:			recompiling fclean all

checking:
	printf "$(BOLD)Checking [$(BLUE)$(UNDLINE)Objects of $(NAME)$(BLANK)]...\n"

recompiling:
	printf "[$(BLUE)$(UNDLINE)$(NAME)$(BLANK)] is Being $(BOLD)Recompiled$(BLANK)...\n"

.PHONY:		all clean fclean re
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
