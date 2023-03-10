/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:53:11 by tvo               #+#    #+#             */
/*   Updated: 2023/01/31 17:58:23 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_len_hex(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

void	show_hex(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		show_hex(nb / 16, format);
		show_hex(nb % 16, format);
	}
	else if (nb <= 9)
		ft_putchar_fd((nb + '0'), 1);
	else
	{
		if (format == 'x')
			ft_putchar_fd((nb - 10 + 'a'), 1);
		if (format == 'X')
			ft_putchar_fd((nb - 10 + 'A'), 1);
	}
}

int	ft_conversion_hexa(unsigned int nb, const char format)
{
	if (nb == 0)
		return (write(1, "0", 1));
	else
		show_hex(nb, format);
	return (ft_len_hex(nb));
}
/*
int main()
{
	printf("\n----%d----\n", ft_conversion_hexa(-10, 'X'));
	int length = printf("%x\n", -10);
	//printf("****length new test: %d****", length);
}
*/
