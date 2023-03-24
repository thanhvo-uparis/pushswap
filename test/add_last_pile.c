/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:40:45 by tvo               #+#    #+#             */
/*   Updated: 2023/03/22 16:37:01 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct h_list
{
	int data;
	struct h_list *next;
} ps_list;

void	ft_print_list(ps_list *head)
{
	while (head->next != NULL)
	{
		printf("%d -->", head->data);
		head = head->next;
	}
}

ps_list	ft_add_last(ps_list *head, int data)
{
	ps_list	tmp;

	tmp = malloc(sizeof(ps_list));
	tmp.data = data;
	tmp.next = head;
	return (tmp);
}

int main()
{
	ps_list *head;

	head = NULL;
	head = ft_add_last(head, 14);
	head = ft_add_last(head, 42);
	ft_print_list(head);
}
