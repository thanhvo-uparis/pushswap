/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:26:45 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 17:45:07 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void shift_up_a(t_head *head)
{
	t_pile	*current;

	current = head->pile_a;
	if (head->pile_a == NULL || current->next == NULL)
		return ;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = head->pile_a;
	head->pile_a = head->pile_a->next;
	current->next->next = NULL;
	printf("ra\n");
}

void shift_up_b(t_head *head)
{
	t_pile	*current;

	current = head->pile_b;
	if (head->pile_b == NULL || current->next == NULL)
		return ;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = head->pile_a;
	head->pile_a = head->pile_a->next;
	current->next->next = NULL;
	printf("rb\n");
}

void shift_up_ab(t_head *head)
{
	shift_up_a(head);
	shift_up_b(head);
	printf("rr\n");
}
