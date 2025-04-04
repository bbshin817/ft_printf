/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:59:11 by user              #+#    #+#             */
/*   Updated: 2025/03/14 18:48:33 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_pow(int x, int y)
{
	int	result;

	result = 1;
	while (0 < y)
	{
		result *= x;
		y--;
	}
	return (result);
}

static char	*check_zero(char *result, long nbuf)
{
	if (0 == nbuf)
	{
		result[0] = '0';
		result[1] = '\0';
	}
	return (result);
}

static char	*return_str(char *result, long nbuf, int len)
{
	int		i;
	int		div;
	long	latest;

	i = 0;
	div = ft_pow(10, (len - 1));
	if (0 == nbuf)
		check_zero(result, nbuf);
	while (i < len)
	{
		latest = (long)(nbuf / div);
		nbuf = nbuf - latest * div;
		result[i] = '0' + latest;
		div /= 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_utoa(unsigned int n)
{
	int		len;
	long	nbuf;
	long	temp;
	char	*result;

	nbuf = (long)n;
	len = 0;
	temp = nbuf;
	while (0 < temp)
	{
		len++;
		temp /= 10;
	}
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	return_str(result, nbuf, len);
	return (result);
}
