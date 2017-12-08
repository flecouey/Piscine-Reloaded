# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 11:28:10 by flecouey          #+#    #+#              #
#    Updated: 2017/11/16 15:35:20 by flecouey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_display_file.c

NAME = ft_display_file

all : $(NAME)
	gcc -Wall -Wextra -Werror -c $(SRC) 
	gcc -Wall -Wextra -Werror *.o -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
