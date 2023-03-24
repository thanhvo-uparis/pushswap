/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:12:33 by tvo               #+#    #+#             */
/*   Updated: 2023/03/24 16:47:01 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	char **a;
	struct s_list *next;
} h_list;

int main(int ac, char **av)
{
	h_list	pile;
	int i = 0;

	if (ac > 1)
	{
		while (i < (ac - 1))
		{
			pile.a[i] = av[i];
			i++;
		}
	}
	i = 0;
	while (i < (ac - 1))
	{
		printf("%s-->", pile.a[i]);
		i++;
	}
}
