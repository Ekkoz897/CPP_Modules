# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apereira <apereira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 14:34:03 by apereira          #+#    #+#              #
#    Updated: 2024/04/04 07:45:46 by apereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = clap

CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC = main.cpp ClapTrap.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		 $(CC) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)
	
fclean:	clean
		$(RM) $(NAME)

re:	fclean all