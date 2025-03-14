/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:29:14 by sbaba             #+#    #+#             */
/*   Updated: 2025/03/14 18:54:23 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hex(unsigned long n, int uppercase)
{
	int		len;
	char 	*base;

	len = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	
	if (n >= 16)
		len += ft_putnbr_hex(n / 16, uppercase);
	ft_putchar_fd(base[n % 16], 1);
	len++;
	return (len);
}