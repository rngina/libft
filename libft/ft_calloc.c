/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:07:03 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/09 10:54:04 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		return (p);
	}
	else if (nmemb >= UINT_MAX || size >= UINT_MAX || nmemb * size \
			>= UINT_MAX)
		return (NULL);
	else
	{
		p = (void *)malloc(nmemb * size);
		if (!p)
			return (NULL);
		ft_bzero(p, nmemb * size);
		return (p);
	}
	return (NULL);
}
