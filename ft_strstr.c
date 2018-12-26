/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:07:49 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 21:08:32 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*tmp_haystack;

	i = 0;
	tmp_haystack = (char *)haystack;
	if (!(*needle))
		return (tmp_haystack);
	while (tmp_haystack[i])
	{
		j = 0;
		while (needle[j] == tmp_haystack[i + j])
		{
			if (!needle[j + 1])
				return (tmp_haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
