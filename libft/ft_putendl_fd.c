/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:02:15 by tvo               #+#    #+#             */
/*   Updated: 2022/12/12 19:42:24 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int 	main()
{
	int fd;

	fd = open("/mnt/nfs/homes/tvo/Downloads/new_test.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("open() failed!\n");
		return (1);
	}
	ft_putendl_fd("TEST dernier fois", fd);
	if (close(fd) == -1)
	{
		printf("close() failed!\n");
		return (1);
	}
}
*/
