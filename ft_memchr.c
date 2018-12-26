/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:50:06 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 20:50:38 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tmp_c;
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (tmp_s[i] == tmp_c)
			return (tmp_s + i);
		i++;
	}
	return (NULL);
}
