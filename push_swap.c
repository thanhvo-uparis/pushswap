/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:13 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 01:45:06 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	push_b(head);
	push_b(head);
	push_b(head);
	push_a(head);
	ft_print_pile(head->pile_a);
	printf("\n");
	ft_print_pile(head->pile_b);
	free(head);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		push_swap(av);
	}
}
