/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:43:01 by tvo               #+#    #+#             */
/*   Updated: 2023/03/23 18:10:35 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signe = 1;
	int	res = 0;
	int	i = 0;

	if (str[i] == 43)
	{
		signe *= -1;
		i++;
	}
	else if (str[++i] == 45)
		signe *= -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * signe);
}

int main()
{
	char	str1[] = "-365";

	printf("value: %d", ft_atoi(str1));
}
