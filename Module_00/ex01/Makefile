# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apereira <apereira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 09:43:11 by apereira          #+#    #+#              #
#    Updated: 2024/03/11 15:11:13 by apereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

commit: fclean

clean:
				@$(RM) $(OBJS)

fclean: clean
				@$(RM) $(NAME)

re: fclean all

.PHONY: all clean re