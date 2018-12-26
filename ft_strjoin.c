/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:00:34 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 21:00:52 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_conc;
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str_conc = ft_strnew(len_s1 + len_s2);
	if (str_conc == NULL)
		return (NULL);
	str_conc = ft_strcpy(str_conc, s1);
	if (str_conc == NULL)
		return (NULL);
	while (s2[i])
	{
		str_conc[len_s1 + i] = s2[i];
		i++;
	}
	return (str_conc);
}
