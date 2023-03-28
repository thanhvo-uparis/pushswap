/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:21:38 by tvo               #+#    #+#             */
/*   Updated: 2023/03/26 20:41:41 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct h_list
{
	int *data;
	struct h_list *next;
} ps_list;

ps_list *ft_list_push_back(ps_list **begin, int *data)
{
	ps_list	*new_node = malloc(sizeof(ps_list));
	new_node->data = data;
	new_node->next = NULL;
	if (*begin == NULL)
		*begin = new_node;
	else
	{
		ps_list *tmp = *begin;
		while (tmp != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	ps_list *tmp = *begin;
	while (tmp != NULL)
	{
		printf("%d-->", *(tmp->data));
		tmp = tmp->next;
	}
}

int main()
{
	ps_list	*head = NULL;
	int content = 33;
	int x = 422;

	head = ft_list_push_back(&head, &content);
	head = ft_list_push_back(&head, &x);
}
