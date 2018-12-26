/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:56:27 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 20:56:35 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		tmp_c;
	char		*tmp_s;

	tmp_s = (char *)s;
	tmp_c = (char)c;
	i = 0;
	if (tmp_c == '\0')
		return (tmp_s + ft_strlen(tmp_s));
	while (s[i])
	{
		if (tmp_s[i] == tmp_c)
			return (tmp_s + i);
		i++;
	}
	return (NULL);
}
