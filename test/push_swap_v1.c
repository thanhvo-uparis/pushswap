/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_v1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:13 by tvo               #+#    #+#             */
/*   Updated: 2023/03/26 23:30:21 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printf_pile_a(t_pile pile, int size)
{
	int	i = 0;

	while (i < size)
	{
		printf("%d-->", pile.a[i]);
		i++;
	}
}

void	printf_pile_b(t_pile pile, int size)
{
	int	i = 0;

	while (i < size)
	{
		printf("%d-->", pile.b[i]);
		i++;
	}
}

void	push_swap(char **av)
{
	t_pile	pile;
	int	size_av;
	int	i;

	size_av = ft_strlen_av(av);
	pile.size_a = size_av;
	pile.a = malloc(sizeof(int) * size_av);
	if (!pile.a)
		return ;
	pile.b = malloc(sizeof(int) * size_av);
	if (!pile.b)
	{
		free(pile.a);
		return ;
	}
	i = 0;
	av++;
	while (i < size_av)
	{
		pile.a[i] = ft_atoi(av[i]);
		i++;
	}
	swap_a(&pile);
	printf_pile_a(pile, size_av);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		push_swap(av);
	}
}
