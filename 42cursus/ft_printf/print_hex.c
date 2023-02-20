/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:23:50 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/20 16:30:37 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	hex_counter(unsigned int n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_hex_unitoa(unsigned int n)
{
	size_t		i;
	char		*number;
	const char	base[17] = {"0123456789abcdef"};

	if (n == 0)
		return (ft_strdup("0"));
	i = hex_counter(n);
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

int	print_hex(char type, unsigned int num, int fd)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	str = ft_hex_unitoa(num);
	if (type == 'X')
	{
		while (str[i])
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
	}
	size = print_str(str, fd);
	free(str);
	return (size);
}
