NAME	=	harl

SRCS	=	main.cpp \
			Harl.cpp

OBJS	= $(SRCS:.cpp=.o)

CP		= c++

PFLAGS	= -std=c++98 -g -Wall -Werror -Werror -fsanitize=address

all:	$(NAME)

%.o: %.cpp
	@$(CP) $(PFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		@$(CP) $(PFLAGS) $(OBJS) -o $(NAME)

clean:	
		@rm -f $(OBJS)

fclean:	clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean