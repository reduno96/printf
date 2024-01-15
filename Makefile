SRCS = ft_printf.c

OBJS = ${SRCS:.c=.o}

LIBC = ar rcs

NAME = libftprintf.a

RM = rm -rf 

iC = cc

CFLAGS = -Wall -Wextra -Werror 

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c libftprinft.a
	${CC} ${CFLAGS} -c $<

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all 
