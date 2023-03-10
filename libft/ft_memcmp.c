/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:22:47 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 18:51:32 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!((char *)s1))
		return (0);
	while (i < n)
	{
		if (*((unsigned char *)(s1 + i)) == *((unsigned char *)(s2 + i)))
			i++;
		else
			return (*((unsigned char *)(s1 + i)) -
					*((unsigned char *)(s2 + i)));
	}
	return (0);
}
/*
int main()
{
    char *str1 = "studENT";
    char *str2 = "student";
    int res;

    res = ft_memcmp(str1, str2, 7);
    if (res > 0)
        printf("str1 est supérieur à str2");
    else if (res < 0)
        printf("str1 est inférieur à str2");
    else
        printf("str1 est également à str2");
}
*/
