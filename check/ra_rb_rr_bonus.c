/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:58:30 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/07 13:43:45 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_r(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (!(*stack) || !((*stack)->next))
		return ;
	*stack = head->next;
	head->next = NULL;
	ft_lstlast(*stack)->next = head;
}

void	ra_bonus(t_list **stack1)
{
	ft_r(stack1);
}

void	rb_bonus(t_list **stack2)
{
	ft_r(stack2);
}

void	rr_bonus(t_list **stack1, t_list **stack2)
{
	ft_r(stack1);
	ft_r(stack2);
}
