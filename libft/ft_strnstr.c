/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 23:17:24 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 22:54:13 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char s1[30] = "pen pineapple apple pen!";

//     char* ptr = ft_strnstr(s1, "pine", 10);
//     printf("%s\n", ptr);

//     return (0);
// }
