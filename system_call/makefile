NAME		= syscall

LIBFT		= $(LIBFT_PATH)$(LIBFT_SRC)

LIBFT_SRC	= libft.a

SRCS		= sys_call.c \
			  main.c

OBJS		= $(SRCS:.c=.o)

LIBFT_PATH	= libft/

RM		= rm -rf
MAKE	= make -C
CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g
#MAKEFLAGS	+= --silent

all: 		$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(MAKE) $(LIBFT_PATH) clean

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) $(LIBFT_PATH) fclean

re:		fclean all

.PHONY:	all clean fclean re
