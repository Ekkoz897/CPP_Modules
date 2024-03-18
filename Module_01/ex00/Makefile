# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apereira <apereira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 09:43:05 by apereira          #+#    #+#              #
#    Updated: 2024/03/12 12:05:26 by apereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM = rm -rf

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRC:.cpp=.o)

all:	$(NAME) $(OBJS)

%.o: %.cpp
					$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				@$(RM) $(OBJS)

fclean: clean
				@$(RM) $(NAME)

re: fclean all

.PHONY: all clean re