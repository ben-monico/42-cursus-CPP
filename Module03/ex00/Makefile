NAME =	claptrap

SRCS = 	ClapTrap.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address

all: $(NAME)

%.o: $.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean

