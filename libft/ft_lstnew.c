/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:50:34 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 17:57:22 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elmt;

	elmt = (t_list *)malloc(sizeof(*elmt));
	if (!elmt)
		return (NULL);
	elmt->content = content;
	elmt->next = NULL;
	return (elmt);
}
/*
int main()
{
  t_list *ptr;
  ptr = ft_lstnew("hello");
  printf("%s", ptr->content);
}
*/
