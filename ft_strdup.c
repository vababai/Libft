/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:59:05 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 20:59:26 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp_s1;
	int		i;

	tmp_s1 = (char *)malloc(sizeof(*tmp_s1) * (ft_strlen(s1) + 1));
	if (tmp_s1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tmp_s1[i] = s1[i];
		i++;
	}
	tmp_s1[i] = '\0';
	return (tmp_s1);
}
