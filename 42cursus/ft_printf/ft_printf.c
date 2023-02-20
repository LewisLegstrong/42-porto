/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:23:23 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/20 16:27:55 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ch(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

int	print_str(char *str, int fd)
{
	if (str == NULL)
	{
		print_str("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}

int	format_set(va_list ap, const char type)
{
	int	numchar;

	numchar = 0;
	if (type == '%')
		numchar += print_ch('%', 1);
	else if (type == 'c')
		numchar += print_ch(va_arg(ap, int), 1);
	else if (type == 's')
		numchar += print_str(va_arg(ap, char *), 1);
	else if (type == 'i' || type == 'd')
		numchar += print_int(va_arg(ap, int), 1);
	else if (type == 'u')
		numchar += print_uint(va_arg(ap, unsigned int ), 1);
	else if (type == 'x' || type == 'X')
		numchar += print_hex(type, va_arg(ap, unsigned int), 1);
	else if (type == 'p')
		numchar += print_ptr(va_arg(ap, unsigned long long), 1);
	return (numchar);
}

int	ft_printf(const char *frame, ...)
{
	va_list	ap;
	int		i;
	int		numchar;

	i = 0;
	numchar = 0;
	va_start(ap, frame);
	while (frame[i])
	{
		if (frame[i] == '%')
		{
			i++;
			numchar += format_set(ap, frame[i]);
		}
		else
		{
			ft_putchar_fd(frame[i], 1);
			numchar++;
		}
		i++;
	}
	return (numchar);
}
