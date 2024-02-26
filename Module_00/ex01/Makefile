NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM = rm -rf

SRC = main.cpp phonebook.cpp contact.cpp utils.cpp

OBJS = $(SRC:.cpp=.o)

all:	$(NAME) $(OBJS)

%.o: %.cpp
					$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


git: fclean
	@git add .
	@git commit
	@git push
	@clear
	@echo "|                                                 |"
	@echo "|                                                 |"
	@echo "|      -------{ Commited and Pushed }-------      |"
	@echo "|                                                 |"
	@echo "|                                                 |"

commit: fclean

clean:
				@$(RM) $(OBJS)

fclean: clean
				@$(RM) $(NAME)

re: fclean all

.PHONY: all clean re