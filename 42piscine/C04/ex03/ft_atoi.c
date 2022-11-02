/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:50:01 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/28 09:50:04 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*is_whitespace(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	num;
	int	minus;

	num = 0;
	str = is_whitespace(str);
	minus = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && (*str != '\0'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if ((minus % 2) != 0)
		num = num * (-1);
	return (num);
}

int	main (int argc, char *argv[])
{
	if (argc == 2)
		printf ("%d \n", ft_atoi(argv[1]));
	return (0);
}
