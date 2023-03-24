/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_pointer_element.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:54:56 by tvo               #+#    #+#             */
/*   Updated: 2023/03/24 16:45:45 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    char *a;
    struct s_list *next;
} h_list;

int main(int ac, char **av)
{
	h_list *pile = NULL;
	h_list *nouveau = NULL;


	if (ac > 1)
	{

		int	i = 1;
		while (i < ac)
		{
			nouveau = malloc(sizeof(h_list));
			if (!nouveau)
				return (0);
			nouveau->a = av[i];
			nouveau->next = pile;
			pile = nouveau;
			i++;
		}
		while (pile != NULL)
		{
			printf("%s-->", pile->a);
			pile = pile->next;
		}
		while (nouveau != NULL)
		{
			pile = nouveau->next;
			free(nouveau);
			nouveau = pile;
		}
	}

}
