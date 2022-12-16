# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 15:06:33 by thfirmin          #+#    #+#              #
#    Updated: 2022/12/14 18:53:17 by thfirmin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAME 

NAME	= push_swap

BONUS	= checker

LIBFT	= $(PTH_LIBFT)libft.a

GNL	= $(PTH_GNL)get_next_line.a
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    SOURCES 

SRCS_STACK	= ps_stknew.c \
		  ps_stkadd_front.c \
		  ps_stkadd_back.c \
		  ps_stksize.c \
		  ps_stklast.c \
		  ps_stkdelone.c \
		  ps_stkclear.c

SRCS_OPRTN	= ps_push.c \
		  ps_rotate.c \
		  ps_rrotate.c \
		  ps_swap.c

SRCS_UTILS	= ps_check_stack.c \
		  ps_error.c \
		  ps_stkstatus.c \
		  ps_stkutils.c \
		  push_swap_utils.c

SRCS_INIT	= ps_init.c \
		  ps_init_utils.c

SRCS_MDTRY	= ps_main.c \
		  push_swap.c \
		  ps_chunks.c

SRCS_BONUS	= ps_checker_main.c \
		  ps_checker_utils.c

PKG_SRCS	= $(addprefix $(PTH_STACK),$(SRCS_STACK)) \
		  $(addprefix $(PTH_OPRTN),$(SRCS_OPRTN)) \
		  $(addprefix $(PTH_UTILS),$(SRCS_UTILS)) \
		  $(addprefix $(PTH_INIT),$(SRCS_INIT)) \

MDTRY_SRCS	= $(addprefix srcs/mandatory/,$(SRCS_MDTRY))

BONUS_SRCS	= $(addprefix srcs/bonus/,$(SRCS_BONUS))
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    OBJECTS 

PKG_OBJS	= $(PKG_SRCS:.c=.o)

MDTRY_OBJS	= $(MDTRY_SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     PATHS 

PTH_SRCS	= srcs/
PTH_STACK	= $(addprefix $(PTH_SRCS),stack/)
PTH_OPRTN	= $(addprefix $(PTH_SRCS),operations/)
PTH_UTILS	= $(addprefix $(PTH_SRCS),utils/)
PTH_INIT	= $(addprefix $(PTH_SRCS),init/)
PTH_INCLD	= includes/
PTH_TOOL	= tools/
PTH_LIBFT	= $(addprefix $(PTH_TOOL),libft/)
PTH_GNL		= $(addprefix $(PTH_TOOL),get_next_line/)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES 

CC	= cc
CFLAGS	= -Wall -Wextra -Werror -g
INCLUDE	= -I $(PTH_INCLD) -I $(PTH_LIBFT)
BN_INCLUDE = -I $(PTH_GNL)
MAKE	= make --no-print-directory -C
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     CODES 

BLANK			= \e[m
RED			= \e[38;5;9m
YELLOW			= \e[38;5;11m
GREEN			= \e[38;5;2m
BLUE			= \e[38;5;6m
PURPLE			= \e[38;5;5m
PINK			= \e[38;5;13m
WHITE			= \e[38;5;15m

STRONG			= \e[1m
SHADOW			= \e[2m
ITALIC			= \e[3m
UNDLINE			= \e[4m
UPPLINE			= \e[53m
DUNDLINE		= \e[21m
CENSORED		= \e[9m
UPALIGN			= \e[73m
DWALIGN			= \e[74m
FULLER			= \e[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES 

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

all: libft $(NAME)

libft:
	$(MAKE) $(PTH_LIBFT)

$(NAME): $(PKG_OBJS) $(MDTRY_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDE) $(MDTRY_OBJS) $(PKG_OBJS) $(LIBFT) -o $(NAME)

bonus: all gnl $(BONUS)

$(BONUS): INCLUDE+=$(BN_INCLUDE)

$(BONUS): $(BONUS_OBJS) $(PKG_OBJS) $(LIBFT) $(GNL)
	$(CC) $(CFLAGS) $(INCLUDE) $(BONUS_OBJS) $(PKG_OBJS) $(LIBFT) $(GNL) -o $(BONUS)

gnl:
	$(MAKE) $(PTH_GNL)

clean:
	rm -rf $(PKG_OBJS)
	rm -rf $(MDTRY_OBJS)
	rm -rf $(BONUS_OBJS)
	$(foreach libs,$(PTH_LIBFT) $(PTH_GNL),$(MAKE) $(libs) clean;)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(BONUS)
	$(foreach libs,$(PTH_LIBFT) $(PTH_GNL),$(MAKE) $(libs) fclean;)

re: fclean all

.PHONY: all clean fclean re libft bonus gnl
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
