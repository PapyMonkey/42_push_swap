# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:23:25 by aguiri            #+#    #+#              #
#    Updated: 2022/05/17 23:43:15 by aguiri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				?=	libft.a

CC					=	gcc
CFLAGS				?=	-Wall -Wextra -Werror
AR 					?=	ar
RM					?=	rm -f
MKDIR				?=	mkdir -p
ECHO				?=	echo

# ********************************* F O N T S *********************************

EOC					:=	"\033[0m"
LIGHT				:=	"\033[1m"
DARK				:=	"\033[2m"

ITALIC				:=	"\033[3m"
UNDERLINE			:=	"\033[4m"

BLACK				:=	"\033[30m"
RED					:=	"\033[31m"
GREEN				:=	"\033[32m"
BLUE				:=	"\033[34m"
PURPLE				:=	"\033[35m"
CYAN				:=	"\033[36m"
WHITE				:=	"\033[37m"

# ********************************* P A T H S *********************************

SRCS_PATH			:=	src
OBJS_PATH			:=	bin
HDRS_PATH			:=	include

# ********************************* N A M E S *********************************

SRCS_NAME			:=	ft_atoi.c\
						ft_bzero.c\
						ft_calloc.c\
						ft_get_next_line.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isdigit.c\
						ft_isprint.c\
						ft_itoa.c\
						ft_lst/ft_lstadd_back.c\
						ft_lst/ft_lstadd_front.c\
						ft_lst/ft_lstclear.c\
						ft_lst/ft_lstdelone.c\
						ft_lst/ft_lstiter.c\
						ft_lst/ft_lstlast.c\
						ft_lst/ft_lstmap.c\
						ft_lst/ft_lstnew.c\
						ft_lst/ft_lstsize.c\
						ft_mem/ft_memchr.c\
						ft_mem/ft_memcmp.c\
						ft_mem/ft_memcpy.c\
						ft_mem/ft_memmove.c\
						ft_mem/ft_memset.c\
						ft_printf/ft_printf_arg.c\
						ft_printf/ft_printf_putaddress_fd.c\
						ft_printf/ft_printf_putchar_fd.c\
						ft_printf/ft_printf_putendl_fd.c\
						ft_printf/ft_printf_putnbr_base_fd.c\
						ft_printf/ft_printf_putnbr_fd.c\
						ft_printf/ft_printf_putnbr_uns_fd.c\
						ft_printf/ft_printf_putstr_fd.c\
						ft_printf/ft_printf.c\
						ft_put/ft_putaddress_fd.c\
						ft_put/ft_putchar_fd.c\
						ft_put/ft_putendl_fd.c\
						ft_put/ft_putnbr_base_fd.c\
						ft_put/ft_putnbr_uns_fd.c\
						ft_put/ft_putnbr_fd.c\
						ft_put/ft_putstr_fd.c\
						ft_split.c\
						ft_str/ft_strchr.c\
						ft_str/ft_strdup.c\
						ft_str/ft_striteri.c\
						ft_str/ft_strjoin.c\
						ft_str/ft_strlcat.c\
						ft_str/ft_strlcpy.c\
						ft_str/ft_strlen.c\
						ft_str/ft_strmapi.c\
						ft_str/ft_strncmp.c\
						ft_str/ft_strnstr.c\
						ft_str/ft_strrchr.c\
						ft_str/ft_strtrim.c\
						ft_str/ft_substr.c\
						ft_tolower.c\
						ft_toupper.c
SRCS				:=	$(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
OBJS 				:=	$(addprefix $(OBJS_PATH)/, $(SRCS_NAME:.c=.o))

# ********************************* R U L E S *********************************

all:				$(NAME)
					
$(OBJS_PATH)/%.o: 	$(SRCS_PATH)/%.c $(HDRS_PATH)
					@$(MKDIR) $(dir $@)
					@$(ECHO)\
					$(BLACK)$(DARK)$(ITALIC)"Compiling $<"$(EOC)
					@$(CC) -o $@ -c $< -I $(HDRS_PATH) $(CFLAGS)

$(NAME):			$(OBJS)
					@$(AR) rcs $@ $^ 
					@$(ECHO)\
					$(CYAN)$(UNDERLINE)"$@"$(EOC)": "$(GREEN)"complete"$(EOC)

clean:		
					@$(ECHO)\
					$(RED)$(ITALIC)"Deleting binary files"$(EOC)
					@$(RM) $(OBJS)

fclean:				clean	
					@$(ECHO)\
					$(RED)$(ITALIC)"Deleting static library file"$(EOC)
					@$(RM) -r $(OBJS_PATH)
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
