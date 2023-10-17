# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 12:07:34 by svaccaro          #+#    #+#              #
#    Updated: 2023/10/17 13:14:50 by svaccaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####################################ALIAS#####################################

# Compiler #
CC = cc

# Compilation flags #
CFLAGS = -Wall -Wextra -Werror

# No ask to remove #
CLEAN = rm -f

# Program's name #
NAME = libft.a

# Source files to compile #
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

SRC_ADD = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c\
ft_lstiter_bonus.c ft_lstmap_bonus.c

#SRC_MINE = ft_strcpy.c ft_wordcounter.c ft_intlen.c

# Objects derived from source files .c #
OBJS = $(SRC:.c=.o) $(SRC_ADD:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)
#OBJS_MINE = $(SRC_MINE:.c=.o)

#####################################RULES#####################################

# Default rule: Compiles the libft.a #
all: $(NAME)

$(NAME): 	$(OBJS)
	ar rcs $(NAME) $(OBJS)

# Bonus rule: Compiles the library with bonus functions #
bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

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
