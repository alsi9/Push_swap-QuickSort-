/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:58:46 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/07 13:48:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_rr(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = tmp;
	(*stack)->next = NULL;
	*stack = end;
}

void	rra_bonus(t_list **stack1)
{
	ft_rr(stack1);
}

void	rrb_bonus(t_list **stack2)
{
	ft_rr(stack2);
}

void	rrr_bonus(t_list **stack1, t_list **stack2)
{
	ft_rr(stack1);
	ft_rr(stack2);
}
