/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:43:05 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/27 13:43:07 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{	
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	frase[] = "1a";

	printf("%d", ft_str_is_alpha(frase));
	return (0);
}
*/
