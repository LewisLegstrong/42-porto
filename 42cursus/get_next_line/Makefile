NAME = get_next_line.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all