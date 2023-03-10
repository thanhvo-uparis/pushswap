/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:51:36 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 19:05:51 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_check;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	len_check = ft_strlen(s);
	if ((start + len) > len_check)
		len = len_check - start;
	if (start > len_check)
		len = 0;
	ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main()
// {
// 	char str[] = "black hole";

// 	printf("%s", ft_substr(str, 0, 42000));
// }
