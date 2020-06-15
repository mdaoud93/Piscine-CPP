# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/15 22:46:01 by mdaoud            #+#    #+#              #
#    Updated: 2020/06/15 22:57:26 by mdaoud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET     := megaphone

SRCS     := megaphone.cpp
OBJS     := $(SRCS:.cpp=.o)

CPP      := g++
CPPFLAGS := -Wall -Werror -Wextra

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(TARGET)

re:     fclean all

.PHONY: all clean fclean format re
