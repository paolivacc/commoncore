# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 12:07:34 by svaccaro          #+#    #+#              #
#    Updated: 2023/09/24 00:07:15 by svaccaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####################ALIAS###################

#Program's name
NAME = libft.a
#Compilation flags
CFLAGS = -Wall -Wextra -Werror
#Compiler
CC = cc
#Source files to compile
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strchr.c ft_toupper.c ft_tolower.c
#Change all .c files to .o files
OBJS = $(SRC:.c=.o)
#No ask to remove
CLEAN = rm -f

####################RULES###################

#Assign to all, my program libft.a called by $(NAME)
all: $(NAME)

$(NAME): 	$(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRC)

#bonus:
#
clean: 
	$(CLEAN) $(OBJS)
	
fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

#Tells to command make that this names aren't files
.PHONY: all clean fclean re
