/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:52:03 by sbaba             #+#    #+#             */
/*   Updated: 2025/03/23 20:03:52 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_pointer(unsigned long arg)
{
	int	len;

	len = 0;
	if (!arg)
		return (ft_print_string("(nil)"));
	len += ft_print_string("0x");
	if (arg == 0)
		len += ft_print_string("0");
	else
		len += ft_putnbr_hex(arg, 0);
	return (len);
}
