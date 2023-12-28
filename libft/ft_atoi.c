/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:20:17 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/03 11:34:41 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	minus;
	int	nb;

	minus = 1;
	nb = 0;
	while (*nptr == ' ' || (9 <= *nptr && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			minus = minus * -1;
		}
		nptr++;
	}
	while (47 < *nptr && *nptr < 58)
	{
		nb = nb * 10 + (*nptr - 48);
		nptr++;
	}
	return (nb * minus);
}
