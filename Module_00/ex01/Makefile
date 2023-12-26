NAME = megaphone

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) megaphone.cpp -o $(NAME)


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
	@$(RM) $(NAME)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean re