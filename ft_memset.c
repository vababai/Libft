/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:52:15 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 20:52:28 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_str;
	size_t			i;

	tmp_str = (unsigned char *)b;
	i = 0;
	while (i < len)
		tmp_str[i++] = (unsigned char)c;
	return (b);
}
