/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:51:48 by sbaba             #+#    #+#             */
/*   Updated: 2025/03/14 18:37:34 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int ft_print_int(int arg)
{
	int		len;
	char	*str;

	str = ft_itoa(arg);
	len = ft_print_string(str);
	free(str);
	return (len);
}