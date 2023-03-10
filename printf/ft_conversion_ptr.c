/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:25:48 by tvo               #+#    #+#             */
/*   Updated: 2023/01/31 17:45:01 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_len_ptr(unsigned long long int num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long int num)
{
	const char	*hex = "0123456789abcdef";

	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
		ft_putchar_fd(hex[num], 1);
}

int	ft_conversion_ptr(unsigned long long int ptr)
{
	int	print_length;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		print_length += ft_len_ptr(ptr);
	}
	return (print_length);
}
