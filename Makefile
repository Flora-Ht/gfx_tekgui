##
## Makefile for  in /blinux_home/huot_b/rendus/Infographie/gfx_tekgui/pitch
## 
## Made by Flora Huot
## Login   <huot_b@epitech.net>
## 
## Started on  Thu Feb 25 16:55:17 2016 Flora Huot
## Last update Thu Feb 25 16:55:17 2016 Flora Huot
##

NAME		= tekgui

LIB			= -L../ \
			  -Wl,--whole-archive \
			  -ltekgui \
			  -Wl,--no-whole-archive \
			  -L../lib/ \
			  -lmy
LIB			+= -L/home/${USER}/.froot/lib/ \
			   -L/usr/local/lib \
			   -Llib/ \
			   -llapin \
			   -lsfml-audio \
			   -lsfml-graphics \
			   -lsfml-window \
			   -lsfml-system \
			   -lstdc++ -ldl \

CFLAGS		= -rdynamic -g -W -Wall -Werror -pedantic
CFLAGS		+= -I/home/$(USER)/.froot/include/ -I../include/ -Iinclude -I.

SRC			= main.c

OBJ			= $(SRC:.c=.o)

all: libmy libtekgui $(NAME)
	@echo "Done."

$(NAME): $(OBJ)
	@gcc $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

libmy:
	@echo "Compiling libmy.a ..."
	@make --no-print-directory -C ../lib/my/
	@echo -e "Done."

libtekgui:
	@echo "Compiling libtekgui.a ..."
	@make --no-print-directory -C ../
	@echo -e "Done.\nMaking executable ..."

clean:
	@echo "Cleaning .o-files ..."
	@rm -f $(OBJ)
	@make --no-print-directory -C ../lib/my/ clean
	@make --no-print-directory -C ../ clean

fclean: clean
	@echo "Removing $(NAME) ..."
	@rm -f $(NAME)
	@make --no-print-directory -C ../lib/my/ fclean
	@make --no-print-directory -C ../ fclean

re: fclean all

%.o: %.c
	@echo "->" $<
	@gcc -c $< -o $@ $(CFLAGS)

.PHONY: all libmy libtekgui clean fclean re
