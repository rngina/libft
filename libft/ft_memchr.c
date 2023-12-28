/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:01:35 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/03 11:18:21 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*(p + i) == (const char)c)
			return ((void *)(p + i));
		i++;
	}
	return ((void *)0);
}
