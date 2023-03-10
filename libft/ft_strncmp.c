/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:21:57 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 20:59:16 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ptr1[i] == ptr2[i] && (i < n - 1) && ptr1[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
/*
int main()
{
    char str1[] = "";
    char str2[] = "";
    printf("%d \n", ft_strncmp(str1, str2, 5));
    printf("result is %d", strncmp(str1, str2, 5));
}
*/
