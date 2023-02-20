/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:29:23 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:29:25 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*number;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = counter(n);
	number = malloc(sizeof(char) * (i + 1));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		number[0] = '-';
	}
	number[i--] = '\0';
	while (n)
	{
		number[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (number);
}
