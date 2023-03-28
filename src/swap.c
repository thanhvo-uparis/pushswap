/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:10:06 by tvo               #+#    #+#             */
/*   Updated: 2023/03/28 22:26:39 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_pile	*swap_a(t_head *head)
{
	t_pile	*pile_a = head->pile_a;
	int	tmp;

	if (pile_a == NULL || pile_a->next == NULL)
		return (pile_a);
	tmp = pile_a->data;
	pile_a->data = pile_a->next->data;
	pile_a->next->data = tmp;
	printf("sa\n");
	return (pile_a);
}

t_pile	*swap_b(t_head *head)
{
	t_pile	*pile_b = head->pile_b;
	int	tmp;

	if (pile_b == NULL || pile_b->next == NULL)
		return (pile_b);
	tmp = pile_b->data;
	pile_b->data = pile_b->next->data;
	pile_b->next->data = tmp;
	printf("sb\n");
	return (pile_b);
}

// void	swap_ss(t_head *head)
// {
// 	swap_a(head);
// 	swap_b(head);
// 	printf("ss");
// }
