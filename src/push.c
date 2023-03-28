/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:44:49 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 01:44:45 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_head *head)
{
	if (head->pile_a != NULL)
	{
		t_pile	*tmp = head->pile_a;
		head->pile_a = head->pile_a->next;
		tmp->next = head->pile_b;
		head->pile_b = tmp;
	}
	printf("sb");
}

void	push_a(t_head *head)
{
	if (head->pile_b != NULL)
	{
		t_pile	*tmp = head->pile_b;
		head->pile_b = head->pile_b->next;
		tmp->next = head->pile_a;
		head->pile_a = tmp;
	}
	printf("sb");
}
