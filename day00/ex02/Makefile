# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdaoud <mdaoud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/16 00:32:52 by mdaoud            #+#    #+#              #
#    Updated: 2020/06/16 03:10:24 by mdaoud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME     := account

SRCS     := Account.class.cpp tests.cpp
HDRS     := Contact.class.hpp
OBJS     := $(SRCS:.cpp=.o)

CCOMP      := g++
CPPFLAGS := -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CCOMP) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CCOMP) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re
