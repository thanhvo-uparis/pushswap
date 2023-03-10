/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:09:53 by tvo               #+#    #+#             */
/*   Updated: 2022/12/09 16:46:01 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;

	if (!dest)
		return (0);
	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i) = (unsigned char)ch;
		i++;
	}
	return (dest);
}

/*
int main()
{
    char buffer[10];

    memset(buffer, 'c', sizeof(char) * 10);
    for (int i = 0; i < 10; i++)
        printf("%c", buffer[i]);
}*/