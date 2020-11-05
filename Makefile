# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltalitha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 17:26:06 by ltalitha          #+#    #+#              #
#    Updated: 2020/10/31 15:26:20 by ltalitha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

__SRC = srcs/

__INCLUDES = includes

_SRC = *.c

SRC = $(patsubst %.c, $(__SRC)%.c, $(_SRC))

OBJ = $(patsubst %.c, %.o, $(_SRC))

FLAG = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME) : $(__INCLUDES)/libft.h
	gcc $(FLAG) -c $(SRC) -I $(__INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -Rf $(OBJ)

fclean: clean
	rm -Rf $(NAME)

re: fclean all
