# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/31 19:49:53 by svaccaro          #+#    #+#              #
#    Updated: 2024/04/01 10:51:15 by svaccaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####################################ALIAS#####################################

# Compiler #
CC = cc

# Compilation flags #
CFLAGS = -Wall -Wextra -Werror

# No ask to remove #
CLEAR = rm -f

# Program's name #
NAME = pipex.a

# Source files to compile #
SRC = pipex.c pipex_utils.c
#SRC_BONUS = 

# Objects derived from source files .c #
OBJS = $(SRC:.c=.o)
#OBJS_BONUS = $(SRC_BONUS:.c=.o)

#####################################RULES#####################################

# Default rule: Compiles the libft.a #
all: $(NAME)

$(NAME): 	$(OBJS)
	ar rcs $(NAME) $(OBJS)

# Bonus rule: Compiles the library with bonus functions #
#bonus: $(OBJS) $(OBJS_BONUS)
#	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

# Rule to clean object files #
clean:
	$(CLEAN) $(OBJS) $(OBJS_BONUS)

# Rule to clean everything (clean + library) #
fclean: clean
	$(CLEAN) $(NAME)

# Rule to clean and recompile all #
re: fclean all

# Patter rule to compile any .c file into its corresponding .o file #
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Tells to command make that this names aren't files #
.PHONY: all clean fclean re bonus