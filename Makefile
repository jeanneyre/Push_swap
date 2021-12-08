NAME		=	push_swap

CFLAGS		=	-Wall -Wextra -Werror 

CC			= gcc

SRCS		=	main.c linkedlist.c sort.c utils.c index.c operations.c

OBJS		= $(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.c.o		:	
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re		:	fclean all

.PHONY	:	all re clean fclean bonus

