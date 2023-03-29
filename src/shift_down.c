/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 04:24:46 by tvo               #+#    #+#             */
/*   Updated: 2023/03/29 22:34:10 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void shift_down(t_head *head)
// {
//     t_pile *last = head->pile_a;
//     t_pile *new_last = NULL;

//     // Parcourir la pile pour trouver le dernier élément et le nouveau dernier élément
//     while (last->next != NULL)
//     {
//         new_last = last;
//         last = last->next;
//     }

//     // Enlever le dernier élément
//     free(last);
//     new_last->next = NULL;

//     // Ajouter le dernier élément au début de la pile
//     last->next = head->pile_a;
//     head->pile_a = last;
// }

// void shift_down(t_head *head)
// {
//     // Vérifier si la pile est vide ou contient un seul élément
//     if (head->pile_a == NULL || head->pile_a->next == NULL)
//     {
//         return;
//     }

//     t_pile *last = head->pile_a;
//     t_pile *new_last = NULL;

//     // Parcourir la pile pour trouver le dernier élément et le nouveau dernier élément
//     while (last->next != NULL)
//     {
//         new_last = last;
//         last = last->next;
//     }

//     // Enlever le dernier élément
//     free(last);
//     new_last->next = NULL;

//     // Ajouter le dernier élément au début de la pile
//     last->next = head->pile_a;
//     head->pile_a = last;
// }

// void shift_down(t_head *head)
// {
//     if (head->pile_a == NULL || head->pile_a->next == NULL)
//     {
//         return;
//     }
//     t_pile *last = head->pile_a;
//     t_pile *new_last = NULL;

//     while (last->next != NULL)
//     {
//         new_last = last;
//         last = last->next;
//     }
//     free(last);
//     new_last->next = NULL;

//     last->next = head->pile_a;
//     head->pile_a = last;
//     last->data = new_last->data;
// }

// 4-->8-->2-->5.
// new_last pointe vers 4-->8-->2-->NULL
// last: 5->NULL
void shift_down(t_head *head)
{
    if (head->pile_a == NULL || head->pile_a->next == NULL)
		return ;
	t_pile	*last = head->pile_a;
	t_pile	*new_last = NULL;
	while (last->next != NULL)
	{
		new_last = last;
		last = last->next;
	}
	new_last->next = NULL;
	last->next = head->pile_a;
	head->pile_a = last; // pile_a-->5-->4-->8-->2->NULL
}
