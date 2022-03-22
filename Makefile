# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 10:30:38 by gpacheco          #+#    #+#              #
#    Updated: 2022/03/22 12:20:15 by gpacheco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC_FLAGS = -Wall -Wextra -Werror
AR_FLAGS = -rcs
RM_FLAGS = -f

CC = gcc

S_DIR = srcs
O_DIR = objs

SRC = $(S_DIR)/ft_printf.c
SRC += $(S_DIR)/print_parameter.c

SRC += $(S_DIR)/ft_itoa.c
SRC += $(S_DIR)/ft_utoa.c
SRC += $(S_DIR)/ft_itoh.c
SRC += $(S_DIR)/ft_isprint.c
SRC += $(S_DIR)/ft_strlen.c

SRC += $(S_DIR)/printf_d_i.c
SRC += $(S_DIR)/printf_c.c
SRC += $(S_DIR)/printf_s.c
SRC += $(S_DIR)/printf_p.c
SRC += $(S_DIR)/printf_u.c
SRC += $(S_DIR)/printf_x.c



OBJ = $(patsubst $(S_DIR)/%.c, $(O_DIR)/%.o, $(SRC)) 

all:	$(NAME)

$(NAME):	$(OBJ)
	ar $(AR_FLAGS) $@ $^

$(O_DIR)/%.o:	$(S_DIR)/%.c
	$(CC)	$(C_FLAGS) -I includes -c $< -o $@

main: 	
	$(CC) $(C_FLAGS) main.c $(SRC) -o printf_main.out -I headers

re:	fclean all

fclean:	clean
	rm $(RM_FLAGS) $(NAME)

clean:
	rm $(RM_FLAGS) $(OBJ)

.PHONY: all clean fclean re bonus
