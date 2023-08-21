CC = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libs

 ###############################################################################
 ###############################################################################

VPATH =	src/array src/char src/gnl src/io src/list src/memory		\
		src/string src/printf

SRC_ARR :=	ft_arrdup.c ft_arrfree.c ft_arrlen.c

SRC_CHAR :=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c		\
			ft_iscntrl.c ft_isdigit.c ft_isinstr.c ft_isinstr.c		\
			ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c		\
			ft_isxdigit.c ft_tolower.c ft_toupper.c

SRC_GNL :=	ft_get_next_line.c ft_get_next_line_utils.c

SRC_IO :=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SRC_LIST :=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c		\
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c	\
			ft_lstnew.c ft_lstsize.c

SRC_MEM :=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c			\
			ft_memcpy.c ft_memmove.c ft_memset.c

SRC_PRINT := ft_printf.c ft_printf_utils_nbr.c ft_printf_utils_str.c

SRC_STR :=	ft_atoi.c ft_atol.c ft_count_words.c ft_itoa.c			\
			ft_split.c ft_strchr.c ft_strcmp.c ft_strdup.c			\
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c	\
			ft_strlen.c ft_strlen_c.c ft_strmapi.c ft_strncmp.c		\
			ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strtrim.c		\
			ft_substr.c

OBJS = $(LIBFT_OBJS) $(PRINTFOBJS) $(GNLOBJS)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
