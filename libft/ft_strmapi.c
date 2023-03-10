/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:42:19 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 18:58:36 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		str_len;
	char	*ptr;

	i = 0;
	str_len = ft_strlen(s);
	if (!s)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!ptr)
		return (NULL);
	while (i < str_len)
	{
		ptr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
char	fp(unsigned int i, char c)
{
	(void)i;
	return (c += 1);
}

int		main()
{
	char	str1[] = "abc";
	char	*str2;

	str2 = ft_strmapi(str1, *fp);
	printf("%s \n", str2);
}
*/
