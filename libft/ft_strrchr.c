/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:28:51 by rtavabil          #+#    #+#             */
/*   Updated: 2023/10/31 17:37:27 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*p;

	i = ft_strlen(s);
	ch = (unsigned char)c;
	p = (char *)s;
	while (i > 0)
	{
		if (p[i] == ch)
			return (p + i);
		i--;
	}
	if (p[i] == ch)
		return (p);
	return ((void *)0);
}
