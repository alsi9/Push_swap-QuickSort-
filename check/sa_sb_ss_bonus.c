/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:58:57 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/07 12:27:10 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_s(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa_bonus(t_list **stack1)
{
	ft_s(stack1);
}

void	sb_bonus(t_list **stack2)
{
	ft_s(stack2);
}

void	ss_bonus(t_list **stack1, t_list **stack2)
{
	ft_s(stack1);
	ft_s(stack2);
}
