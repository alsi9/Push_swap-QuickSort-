/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:21:44 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/15 12:02:01 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting(t_list **stack1, int count)
{
	t_list	*stack2;

	stack2 = NULL;
	if (!check_sorting(stack1))
		free_stacks(*stack1, stack2, 0);
	if (count == 2)
		sorting_two(stack1);
	else if (count == 3)
		sorting_three(stack1);
	else if (count == 4 || count == 5)
		sorting_five(stack1, &stack2);
	else if (count > 5)
		big_sorting(stack1, &stack2, count);
	free_stacks(*stack1, stack2, 0);
}
