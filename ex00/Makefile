NAME		= ClapTrap
OBJS		= objs

SRCS		= main.cpp  ClapTrap.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re