# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbonnefo <lbonnefo@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 13:56:33 by lbonnefo          #+#    #+#              #
#    Updated: 2023/01/27 14:07:05 by lbonnefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl.a

FILES = get_next_line.c \
	   get_next_line_utils.c \

SRCS= $(addprefix lbonnefo/, $(FILES))

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

.c.o:
		cc $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJ) 

fclean: clean
		rm -f $(NAME)

re :	fclean $(NAME)
	
.PHONY: all clean fclean re 
