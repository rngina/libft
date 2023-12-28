/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:13:10 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/01 15:54:36 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	char	*new_src;
	size_t	i;

	new_dest = (char *)dest;
	new_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*(new_dest + i) = *(new_src + i);
		i++;
	}
	return (dest);
}
