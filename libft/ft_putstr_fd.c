/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 04:43:14 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 17:58:28 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
int	main()
{
	int fd;

	fd = open("/mnt/nfs/homes/tvo/Downloads/new_test.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("open() failed!\n");
		return (1);
	}
	ft_putstr_fd("WELCOME TO", fd);
	if (close(fd) == -1)
	{
		printf("close() failed!\n");
		return (1);
	}
}
*/
