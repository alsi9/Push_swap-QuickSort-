/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:57:44 by ephantom          #+#    #+#             */
/*   Updated: 2021/12/06 20:21:37 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa_bonus(t_list **stack1, t_list **stack2)
{
	t_list	*push_b;

	if (!(*stack2))
		return ;
	push_b = (*stack2)->next;
	(*stack2)->next = *stack1;
	*stack1 = *stack2;
	*stack2 = push_b;
}

void	pb_bonus(t_list **stack1, t_list **stack2)
{
	t_list	*push_a;

	if (!(*stack1))
		return ;
	push_a = (*stack1)->next;
	(*stack1)->next = *stack2;
	*stack2 = *stack1;
	*stack1 = push_a;
}
