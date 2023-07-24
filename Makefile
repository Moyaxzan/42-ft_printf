NAME		= libftprintf.a

SRCS		= src/ft_printf.c \
			src/printf_utils.c \
			src/printf_utils2.c

CC			= cc

OBJS		= $(SRCS:.c=.o)

C_FLAGS		= -Wall -Wextra -Werror

AR_FLAGS	= -rcs

RM_FLAGS	= -f

$(NAME) :	$(OBJS)
			ar $(AR_FLAGS) $(NAME) $(OBJS)

all :		$(NAME)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean :
			rm $(RM_FLAGS) $(OBJS)

fclean :	clean
			rm $(RM_FLAGS) $(NAME)

re :		fclean all

.PHONY :	all  clean fclean re