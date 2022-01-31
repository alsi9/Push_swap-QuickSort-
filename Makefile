# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ephantom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 17:43:42 by ephantom          #+#    #+#              #
#   Updated: 2021/12/15 12:16:59 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

NAME_B	=	checker

SRCS	=	srcs/sorting_utils.c	srcs/main.c			srcs/pa_pb.c\
			srcs/sorting_main.c		srcs/sa_sb_ss.c		srcs/ra_rb_rr.c\
			srcs/big_sorting.c		srcs/rra_rrb_rrr.c


SRCS_B	=	check/checker.c		check/get_next_line.c	check/ft_strncmp.c\
			check/pa_pb_bonus.c	check/ra_rb_rr_bonus.c	check/rra_rrb_rrr_bonus.c\
			check/sa_sb_ss_bonus.c

SRCS_L	=	utils/libft_utils.c		utils/lst_utils.c		utils/utils.c\
			utils/ft_atoi.c			utils/ft_split.c

HEADER	=	includes/push_swap.h

OBJS	=	${SRCS:%.c=%.o}

OBJS_B	=	${SRCS_B:%.c=%.o}

OBJS_L	=	${SRCS_L:%.c=%.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

RM		=	 rm -f

.PHONY:		all clean fclean re bonus

all:		${NAME}

bonus:		${NAME_B}

%.o: 		%.c ${HEADER}
				${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${OBJS_L} ${HEADER}
				${CC} ${CFLAGS} ${OBJS} ${OBJS_L} -o ${NAME}

${NAME_B}:	${OBJS_B} ${OBJS_L} ${HEADER}
				${CC} ${CFLAGS} ${OBJS_B} ${OBJS_L} -o ${NAME_B}

clean:		
			${RM} ${OBJS} ${OBJS_B} ${OBJS_L}

fclean:		clean
			${RM} ${NAME} ${NAME_B}

re:			fclean all
