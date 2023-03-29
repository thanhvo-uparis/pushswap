/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:26:45 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 17:15:46 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void shift_up(t_head *head)
{
	if (head->pile_a == NULL)
	{
		printf("Pile a est vide!");
		return ;
	}
	t_pile	*current = head->pile_a;
	if (current->next == NULL)
	{
		return;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = head->pile_a;
	head->pile_a = head->pile_a->next;
	current->next->next = NULL;
}

