/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:40:36 by sbaba             #+#    #+#             */
/*   Updated: 2025/03/14 18:58:53 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hex_upper(unsigned int arg)
{
	int	len;

	len = 0;
	len = ft_putnbr_hex(arg, 1);
	return (len);
}
