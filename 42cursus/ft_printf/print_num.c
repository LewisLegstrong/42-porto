/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:23:32 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/20 15:26:31 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	counter(unsigned int n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_unitoa(unsigned int n)
{
	size_t	i;
	char	*number;

	if (n == 0)
		return (ft_strdup("0"));
	i = counter(n);
	number = malloc(sizeof(char) * (i + 1));
	if (!number)
		return (NULL);
	number[i--] = '\0';
	while (n)
	{
		number[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (number);
}

int	print_int(int num, int fd)
{
	char	*print_num;
	int		size;

	size = 0;
	print_num = ft_itoa(num);
	size = print_str(print_num, fd);
	free(print_num);
	return (size);
}

int	print_uint(unsigned int num, int fd)
{
	char	*print_num;
	int		size;

	size = 0;
	print_num = ft_unitoa(num);
	size = print_str(print_num, fd);
	free(print_num);
	return (size);
}
