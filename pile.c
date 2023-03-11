/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:07:35 by tvo               #+#    #+#             */
/*   Updated: 2023/03/11 23:00:54 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_last(t_pile **head, int data)
{
	t_pile	*new_node;
	t_pile	*last;

	new_node = malloc(sizeof(t_pile));
	new_node->data = data;
	new_node->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
}

void	display_pile(t_pile  *head)
{
	while (head)
	{
		printf("%d -->", head->data);
		head = head->next;
	}
}

// int main()
// {
// 	t_pile	*head;

// 	head = NULL;
// 	add_last(&head, 5);
// 	add_last(&head, 4);
// 	add_last(&head, 11);
// 	display_pile(head);
// }
