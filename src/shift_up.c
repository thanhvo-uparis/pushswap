/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:26:45 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 03:07:15 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	rotate_a(t_head *head)
// {
// 	if (head->pile_a != NULL)
// 	{
// 		int tmp;

// 		tmp = head->pile_a->data;
// 		head->pile_a = add_last_pile(head, tmp);
// 	}
// }

void shift_up(t_head *head)
{
    // Vérifier si la pile a est vide
    if (head->pile_a == NULL)
    {
        printf("La pile a est vide\n");
        return;
    }

    // Déplacer le premier élément de la pile a vers la fin
    t_pile *current = head->pile_a;
    head->pile_a = head->pile_a->next;

    // Ajouter l'élément au bas de la pile a
    current->next = NULL;
    t_pile *last = head->pile_a;
    if (last == NULL)
    {
        head->pile_a = current;
    }
    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = current;
    }
}
