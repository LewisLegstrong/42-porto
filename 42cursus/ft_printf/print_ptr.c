/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:23:44 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/20 16:33:58 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ptr_counter(unsigned long long n)
{
	unsigned long long	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_ptr_unitoa(unsigned long long n)
{
	unsigned long long	i;
	char				*number;
	const char			base[17] = {"0123456789abcdef"};

	if (n == 0)
		return (ft_strdup("0"));
	i = ptr_counter(n);
	number = malloc(sizeof(char) * (i + 1));
	if (!number)
		return (NULL);
	number[i--] = '\0';
	while (n)
	{
		number[i] = base[n % 16];
		n = n / 16;
		i--;
	}
	return (number);
}

int	print_ptr(unsigned long long num, int fd)
{
	char	*str;
	int		size;

	size = 0;
	if (num == 0)
	{
		print_str("(nil)", 1);
		return (5);
	}
	size += print_str("0x", 1);
	str = ft_ptr_unitoa(num);
	size += print_str(str, fd);
	free(str);
	return (size);
}
