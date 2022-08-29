#Las reglas $(NAME), clean, fclean, re y all son obligatorias

SRC = int2.c key_triplet.c load_dictionary.c struct.c support.c main.c

SRCS = ${addprefix ${PRE}, ${SRC}}

OBJS = ${SRCS:.c=.o}

PRE = ./srcs/

HEAD = ./includes/

NAME = rush-02

COMP = gcc

FLAGS  = -Wall -Werror -Wextra

all:	${NAME}

.c.o:
	${COMP} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${COMP} ${FLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re