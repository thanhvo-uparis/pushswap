/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:37:57 by tvo               #+#    #+#             */
/*   Updated: 2023/03/28 18:29:26 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen_av(char **av)
{
	av++;
	int	len;

	while (*av++)
		len++;
	return (len);
}

t_pile	*add_last_pile(t_head *begin, int data)
{
	t_pile	*new_pile = malloc(sizeof(t_pile));
	if (!new_pile)
	{
		printf("Error echec de l'allocation memoire!\n");
		exit(EXIT_FAILURE);
	}
	new_pile->data = data;
	new_pile->next = NULL;
	if (begin->pile_a == NULL)
		begin->pile_a = new_pile;
	else
	{
		t_pile	*tmp = begin->pile_a;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_pile;
	}
	return (new_pile);
}

int main(int ac, char **av)
{
	t_head head = {NULL, NULL};
	int i = 0;
	while (i < 4)
	{
		add_last_pile(&head, atoi(av[i]));
		i++;
	}
	if (ac > 1)
	{
		t_pile	*tmp = head.pile_a;
		while (tmp != NULL)
		{
			printf("%d-->", tmp->data);
			tmp = tmp->next;
		}
	}
}
