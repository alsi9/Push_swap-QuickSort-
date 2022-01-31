/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:50:49 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/15 12:06:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	char	**str;
	t_list	*stack1;
	int		i;

	i = 0;
	stack1 = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		while (str[i])
			ft_lstadd_back(&stack1, ft_lstnew(ft_atoi(str[i++])));
	}
	else
	{
		while (++i < argc)
			ft_lstadd_back(&stack1, ft_lstnew(ft_atoi(argv[i])));
	}
	if (check_identical(&stack1) == 1)
		free_stack(stack1, 1);
	sorting(&stack1, count_lst(&stack1));
}
