/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaba <sbaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:34:26 by sbaba             #+#    #+#             */
/*   Updated: 2025/03/14 19:00:29 by sbaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	branch_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_print_pointer(va_arg(args, unsigned int)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_print_hex_lower(va_arg(args, unsigned int)));
	else if (specifier == 'X')
		return (ft_print_hex_upper(va_arg(args, unsigned int)));
	else if (specifier == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (format[count] != '\0')
	{
		if (format[count] == '%')
		{
			count++;
			branch_specifier(format[count], args);
		}
		else
			ft_putchar_fd(format[count], 1);
		count++;
	}
	va_end(args);
	return (count);
}

// int	main()
// {
// 	ft_printf("%%c: %c\n", 'c');
// 	ft_printf("%%s: %s\n", "hello, world");
// 	ft_printf("%%p: %p\n", (int *)0x1234abcd);
// 	ft_printf("%%d: %d\n", 123);
// 	ft_printf("%%i: %i\n", 123);
// 	ft_printf("%%u: %u\n", -1);
// 	ft_printf("%%x: %x\n", 232323);
// 	ft_printf("%%X: %X\n", 232323);
// 	ft_printf("%%%%: %%\n");
// }
