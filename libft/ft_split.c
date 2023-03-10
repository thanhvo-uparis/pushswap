/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:09:27 by tvo               #+#    #+#             */
/*   Updated: 2023/02/11 15:18:46 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_string(char const *str, char sep)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

int	ft_lenword(char const *str, char sep)
{
	int		count;

	count = 0;
	while (str[count] && str[count] != sep)
		count++;
	return (count);
}

char	*ft_word(char const *str, char sep)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = ft_lenword(str, sep);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**strings;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (ft_count_string(s, c) + 1));
	if (!strings)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			strings[i] = ft_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	strings[i] = 0;
	return (strings);
}

// int		main()
// {
// 	char	example[] = "  NEW  Example2  ";
// 	char	**ptr;
// 	int		count_string;
// 	char	separator;
// 	int		i;

// 	separator = ' ';
// 	i = 0;
// 	ptr = ft_split(example, separator);
// 	count_string = ft_count_string(example, separator);
// 	while (i < count_string)
// 	{
// 		printf("%s \n", ptr[i]);
// 		free(ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return (0);
// }
