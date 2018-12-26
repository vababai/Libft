/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:07:02 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/26 21:34:42 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numofwords(const char *str, char c)
{
	size_t	i;
	int		flag;
	size_t	count;

	i = 0;
	count = 0;
	flag = 1;
	if (!str)
		return (0);
	if (str[0] && str[0] != c)
		count++;
	while (str[i])
	{
		if (flag && str[i] == c)
			flag = 0;
		if (!flag && str[i] != c)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void		ft_freearr(char **arr, int len)
{
	while (len > 0)
	{
		free(arr[len--]);
		arr[len] = NULL;
	}
	free(arr);
	arr = NULL;
}

static size_t	ft_len_to_c(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	**arr;
	size_t	num_w;

	i = 0;
	if (s == NULL)
		return (NULL);
	num_w = ft_numofwords(s, c);
	if (!(arr = (char **)malloc(sizeof(*arr) * (num_w + 1))))
		return (NULL);
	while (i < num_w)
	{
		while (*s && *s == c)
			s++;
		arr[i] = ft_strsub(s, 0, ft_len_to_c(s, c));
		if (arr[i] == NULL)
		{
			ft_freearr(arr, i - 1);
			return (NULL);
		}
		s += ft_len_to_c(s, c);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
