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

#include "libft.h"

static char	*is_whitespace(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	num;
	int	minus;

	minus = 0;
	num = 0;
	str = is_whitespace(str);
	minus = 1;
	if (*str == '-' || *str == '+')
	{	
		if (*str == '-')
			minus = -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && (*str != '\0'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * minus);
}
