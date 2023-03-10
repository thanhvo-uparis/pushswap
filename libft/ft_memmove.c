/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:19:49 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 20:25:58 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest | !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
// int main() {
// 	char Like[10] = { "ILikeYou" };
// 	char Hate[10] = { "IHateYou" };
// 	char str[] = "12345678";

// 	printf("memmove before : %s\n", Like);
// 	ft_memmove(Like + 1, Hate + 1, 4);
// 	printf("memmove after : %s\n", Like);

// 	return 0;
// }
