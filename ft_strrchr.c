/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:06:20 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 21:06:53 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		tmp_c;
	char		*tmp_s;
	size_t		last_c;
	int			flag;

	tmp_s = (char *)s;
	tmp_c = (char)c;
	i = 0;
	last_c = 0;
	flag = 0;
	if (tmp_c == '\0')
		return (tmp_s + ft_strlen(tmp_s));
	while (s[i])
	{
		if (tmp_s[i] == tmp_c)
		{
			last_c = i;
			flag = 1;
		}
		i++;
	}
	if (flag)
		return (tmp_s + last_c);
	return (NULL);
}
