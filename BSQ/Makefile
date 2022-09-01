#Las reglas $(NAME), clean, fclean, re y all son obligatorias

SRC = ft_atoi.c ft_matrix_auxiliary.c ft_file_auxiliary.c ft_solve_matrix.c ft_parse_matrix.c main.c
SRCS = ${addprefix ${PRE}, ${SRC}}

OBJS = ${SRCS:.c=.o}

PRE = ./src/

HEAD = ./include/

NAME = bsq

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