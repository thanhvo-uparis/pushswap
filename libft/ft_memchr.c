/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:22:26 by tvo               #+#    #+#             */
/*   Updated: 2022/12/11 15:47:12 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (*((unsigned char *)(s + i)) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char str1[] = "vncoding forum";
    int c;
    char *ptr;

    c = 'o';
    ptr = (char*)ft_memchr(str1, c, 3);
    // ptr = (char*)memchr(str1, c, 3);
    if (ptr != NULL)
        printf("%c is at position %ld", c, ptr-str1+1);
    else
        printf("not found!");
}
*/
