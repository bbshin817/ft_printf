/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:52:08 by sbaba             #+#    #+#             */
/*   Updated: 2025/03/22 16:30:18 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_unsigned(unsigned int arg)
{
	int		len;
	char	*str;

	if (0 == arg)
	{
		write(1, "0", 1);
		return (1);
	}
	str = ft_utoa(arg);
	len = ft_print_string(str);
	free(str);
	return (len);
}
