/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:20:41 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/09 12:31:51 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*res;

	if (!s1)
		return ((void *)0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i)
		i--;
	res = ft_substr(s1, 0, i + 1);
	if (!res)
		return ((void *)0);
	return (res);
}
