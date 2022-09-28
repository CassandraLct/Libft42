CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
NAME    = libft.a
SRC     = ft_strmapi.c ft_striteri.c ft_putnbr_fd.c ft_putstr_fd.c \
          ft_itoa.c ft_strtrim.c ft_strjoin.c ft_strdup.c \
          ft_substr.c ft_calloc.c ft_atoi.c ft_strnstr.c \
          ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c \
          ft_strchr.c ft_tolower.c ft_toupper.c ft_isprint.c \
          ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c \
          ft_strlen.c ft_memcmp.c ft_memmove.c \
          ft_memchr.c ft_memcpy.c ft_bzero.c ft_memset.c \
          ft_split.c ft_putendl_fd.c ft_putchar_fd.c
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c 
OBJ     = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus : $(OBJ) $(OBJ_BONUS)
	ar -rc $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

.PHONY : clean fclean re

clean :
	rm -rf $(OBJ)
	rm -rf $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
