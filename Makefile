# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amohiam <amohiam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 14:48:12 by amohiam           #+#    #+#              #
#    Updated: 2021/09/21 15:09:18 by amohiam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

all :
	gcc $(FLAGS) server.c extra.c -o server
	gcc $(FLAGS) client.c extra.c ft_atoi.c -o client

clean :
	rm -rf client.o server.o

fclean : clean
	rm -rf client server

re : fclean all