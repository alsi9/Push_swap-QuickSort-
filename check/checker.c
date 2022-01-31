/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:15:07 by ephantom          #+#    #+#             */
/*   Updated: 2022/01/31 11:15:15 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	get_cmd(char *line, t_list **stack1, t_list **stack2)
{
	if (!ft_strncmp(line, "pa", 3))
		pa_bonus(stack1, stack2);
	else if (!ft_strncmp(line, "pb", 3))
		pb_bonus(stack1, stack2);
	else if (!ft_strncmp(line, "ra", 3))
		ra_bonus(stack1);
	else if (!ft_strncmp(line, "rb", 3))
		rb_bonus(stack2);
	else if (!ft_strncmp(line, "rr", 3))
		rr_bonus(stack1, stack2);
	else if (!ft_strncmp(line, "sa", 3))
		sa_bonus(stack1);
	else if (!ft_strncmp(line, "sb", 3))
		sb_bonus(stack2);
	else if (!ft_strncmp(line, "ss", 3))
		ss_bonus(stack1, stack2);
	else if (!ft_strncmp(line, "rra", 4))
		rra_bonus(stack1);
	else if (!ft_strncmp(line, "rrb", 4))
		rrb_bonus(stack2);
	else if (!ft_strncmp(line, "rrr", 4))
		rrr_bonus(stack1, stack2);
	else
		free_stacks(*stack1, *stack2, 1);
}

void	checker(t_list **stack1, int count)
{
	t_list	*stack2;
	char	*line;

	stack2 = NULL;
	line = NULL;
	if (check_identical(stack1) == 1)
		free_stack(*stack1, 1);
	set_index(stack1);
	while ((get_next_line(&line, 0)) > 0)
	{
		get_cmd(line, stack1, &stack2);
		free(line);
		line = NULL;
	}
	if (check_sorting_a(stack1, count))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	free_stacks(*stack1, stack2, 0);
}

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
		if (!*str)
		{
			free(str);
			return (0);
		}
		while (str[i])
			ft_lstadd_back(&stack1, ft_lstnew(ft_atoi(str[i++])));
	}
	else
	{
		while (++i < argc)
			ft_lstadd_back(&stack1, ft_lstnew(ft_atoi(argv[i])));
	}
	checker(&stack1, count_lst(&stack1));
}
