/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:24:46 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 22:59:05 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// 4-->8-->2-->5.
// new_last pointe vers 4-->8-->2-->NULL
// last: 5->NULL
void	shift_down_a(t_head *head)
{
	t_pile	*last;
	t_pile	*new_last;

	last = head->pile_a;
	new_last = NULL;
	if ((head->pile_a == NULL) || (head->pile_a->next == NULL))
		return ;
	while (last->next != NULL)
	{
		new_last = last;
		last = last->next;
	}
	new_last->next = NULL;
	last->next = head->pile_a;
	head->pile_a = last;
	printf("rra\n");
}

void	shift_down_b(t_head *head)
{
	t_pile	*last;
	t_pile	*new_last;

	last = head->pile_b;
	new_last = NULL;
	if ((head->pile_b == NULL) || (head->pile_b->next == NULL))
		return ;
	while (last->next != NULL)
	{
		new_last = last;
		last = last->next;
	}
	new_last->next = NULL;
	last->next = head->pile_b;
	head->pile_b = last;
	printf("rrb\n");
}

void	shift_down_ab(t_head *head)
{
	shift_down_a(head);
	shift_down_b(head);
	printf("rrr\n");
}
