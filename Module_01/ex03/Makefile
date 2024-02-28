# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apereira <apereira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 11:12:20 by apereira          #+#    #+#              #
#    Updated: 2024/02/28 13:13:46 by apereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = war

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRC:.cpp=.o)

all:	$(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		 $(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)
	
fclean:	clean
		$(RM) $(NAME)

re:	fclean all