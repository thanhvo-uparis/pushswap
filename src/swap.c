/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:10:06 by tvo               #+#    #+#             */
/*   Updated: 2023/03/24 18:16:27 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_pile *pile)
{
	int	tmp;

	if (pile->a[0] == NULL || pile->a[1] == NULL)
		return ;
	tmp = pile->a[0];
	pile->a[0] = pile->a[1];
	pile->a[1] = tmp;
	printf("sa");
}

void	swap_b(t_pile *pile)
{
	int	tmp;

	if (pile->b[0] == NULL || pile->b[1] == NULL)
		return ;
	tmp = pile->b[0];
	pile->b[0] = pile->b[1];
	pile->b[1] = tmp;
	printf("sb");
}

void	swap_ss(t_pile *pile)
{
	swap_a(pile);
	swap_b(pile);
	printf("ss");
}


