NAME = unnecessary_violence

CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS = 	$(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(MAIN) -o $@ $(LDLIBS) $(LFLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug:
	$(CC) $(CFLAGS) -g $(INCLUDES) $(LDFLAGS) $(OBJS) $(MAIN) -o $@ $(LDLIBS) $(LFLAGS)

.PHONY: debug

.PHONY: all clean fclean re
