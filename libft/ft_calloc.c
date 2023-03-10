/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:56:54 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 22:51:14 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t sz)
{
	void	*ptr;

	if (sz && count * sz / sz != count)
		return (NULL);
	ptr = malloc(count * sz);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * sz);
	return (ptr);
}
/*
int main()
{
    void *p;

    p = ft_calloc(sizeof(int), 20);
}
*/
