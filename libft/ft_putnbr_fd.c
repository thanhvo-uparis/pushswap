/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:10:38 by tvo               #+#    #+#             */
/*   Updated: 2022/12/13 22:52:54 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str;

	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, "8", 1);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		str = '0' + (n % 10);
	}
	else
		str = '0' + n;
	write(fd, &str, 1);
}
// int	main(void)
// {
// 	int	fd;

// 	fd = open("new_test.txt", O_WRONLY);
// 	if (fd == -1)
// 	{
// 		printf("open() failed!\n");
// 		return (1);
// 	}
// 	ft_putnbr_fd(5555, fd);
// 	if (close(fd) == -1)
// 	{
// 		printf("close() failed!\n");
// 		return (1);
// 	}
// }
