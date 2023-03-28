/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:13 by tvo               #+#    #+#             */
/*   Updated: 2023/03/28 21:44:56 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	printf_pile_a(t_pile pile, int size)
// {
// 	int	i = 0;

// 	while (i < size)
// 	{
// 		printf("%d-->", pile.a[i]);
// 		i++;
// 	}
// }

// void	printf_pile_b(t_pile pile, int size)
// {
// 	int	i = 0;

// 	while (i < size)
// 	{
// 		printf("%d-->", pile.b[i]);
// 		i++;
// 	}
// }

void	push_swap(char **av)
{
	t_head	*head = malloc(sizeof(t_head));
	int	size_av;
	int	i;

	head->pile_a = NULL;
	head->pile_b = NULL;
	size_av = ft_strlen_argv(av);
	i = 1;
	while (i < size_av)
	{
		add_last_pile(head, ft_atoi(av[i]));
		i++;
	}
	t_pile *tmp = swap_a(head);
	while (tmp != NULL)
	{
		printf("%d-->", tmp->data);
		tmp = tmp->next;
	}
	free(head);
	free(tmp);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		push_swap(av);
	}
}
