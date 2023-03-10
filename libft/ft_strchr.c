/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:27:44 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 18:49:08 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}
/*
int main()
{
	char str1[] = "stotal42";
	char *p;
	char c;

	c = 't';
	p = ft_strchr(str1, c);
	// printf("result 1 is: %s \n", strchr(str1, c));
	printf("result 2 is: %s", p);
}
*/
