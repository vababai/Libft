/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:09:14 by kjacks            #+#    #+#             */
/*   Updated: 2018/12/13 21:09:30 by kjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	str = ft_strnew(len == 0 ? 0 : len - i);
	if (str == NULL)
		return (NULL);
	if (len == 0)
		return (str);
	str = ft_strncpy(str, s + i, len - i);
	str[len - i] = '\0';
	return (str);
}
