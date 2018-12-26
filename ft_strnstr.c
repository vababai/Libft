/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:05:26 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 21:06:13 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp_haystack;
	size_t	n;

	i = 0;
	n = ft_strlen(needle);
	tmp_haystack = (char *)haystack;
	if (!(*needle) || haystack == needle)
		return (tmp_haystack);
	while (tmp_haystack[i] && i < len)
	{
		j = 0;
		while ((char)needle[j] == tmp_haystack[i + j] && j + i < len)
		{
			if (needle[j + 1] == '\0')
				return (tmp_haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
