CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRCS = add_func.c test.c ft_split.c push_swap.c  instructions.c  \
	opera_stack.c algo_part1.c garbage_collector.c algo_part2.c \
	moves_a.c moves_b.c sort.c find_for_algo2.c find_for_sort.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): push_swap.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all