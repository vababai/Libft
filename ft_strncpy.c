/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:03:48 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 21:04:47 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		flag;

	flag = 1;
	i = 0;
	while (i < len)
	{
		if (flag && src[i])
			dst[i] = src[i];
		else
		{
			dst[i] = '\0';
			flag = 0;
		}
		i++;
	}
	return (dst);
}
