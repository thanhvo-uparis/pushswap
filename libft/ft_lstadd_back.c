/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:44:43 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 17:35:26 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (alst)
	{
		if (*alst)
		{
			last = ft_lstlast(*alst);
			last->next = new;
		}
		else
			*alst = new;
	}
}
/*
void    aff_list(t_list *begin)
{
    while (begin)
    {
        printf("%s\n", begin->content);
        begin = begin->next;
    }
}

int main()
{
	t_list l1;
	t_list *begin;
	t_list *new;

	begin = &l1;
	l1.next = NULL;
	l1.content = "student";
	new->content = "black hole!";
	aff_list(begin);
}
*/
