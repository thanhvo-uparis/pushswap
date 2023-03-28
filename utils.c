/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:37:57 by tvo               #+#    #+#             */
/*   Updated: 2023/03/28 21:38:43 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen_argv(char **av)
{
	int	len;

	len = 0;
	while (*av != NULL)
	{
		av++;
		len++;
	}
	return (len);
}

// int main(int ac, char **av)
// {
// 	if (ac > 1)
// 	{
// 		printf("%d", ft_strlen_av(av));
// 	}
// }

t_pile	*add_last_pile(t_head *head, int data)
{
	t_pile	*new_pile = malloc(sizeof(t_pile));
	if (!new_pile)
	{
		printf("Error echec de l'allocation memoire!\n");
		exit(EXIT_FAILURE);
	}
	new_pile->data = data;
	new_pile->next = NULL;
	if (head->pile_a == NULL)
		head->pile_a = new_pile;
	else
	{
		t_pile	*tmp = head->pile_a;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_pile;
	}
	return (new_pile);
}

// int main(int ac, char **av)
// {
// 	t_head *head = malloc(sizeof(t_head));
// 	head->pile_a = NULL;
//     head->pile_b = NULL;
// 	int i = 1;
// 	while (i < 4)
// 	{
// 		add_last_pile(head, atoi(av[i]));
// 		i++;
// 	}
// 	if (ac > 1)
// 	{
// 		t_pile	*tmp = head->pile_a;
// 		while (tmp != NULL)
// 		{
// 			printf("%d-->", tmp->data);
// 			tmp = tmp->next;
// 		}
// 	}
// }
