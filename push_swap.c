/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:03:13 by tvo               #+#    #+#             */
/*   Updated: 2023/03/11 23:02:26 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# include "libft/libft.h"

void	print_split(char *av)
{
	char	separator;
	char	**tmp;
	int		words;
	int		i;

	separator = ' ';
	tmp = ft_split(av, separator);
	words = ft_count_string(av, separator);
	i = 0;
	while (++i < words)
		printf("%d", ft_atoi(*tmp++));
}

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		int		i;
		t_pile	*a;

		a = NULL;
		i = 0;
		while (++i < ac)
		{
			add_last(&a, ft_atoi(av[i]));
		}
		display_pile(a);
	}
}
