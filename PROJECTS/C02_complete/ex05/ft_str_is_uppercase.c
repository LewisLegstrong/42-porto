/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:13:25 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/21 20:13:26 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{	
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char frase[] = "";
	
	printf("%d", ft_str_is_uppercase(frase));
	return (0);
}
*/
