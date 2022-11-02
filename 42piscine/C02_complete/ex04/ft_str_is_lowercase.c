/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:09:08 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/21 20:09:10 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{	
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	frase[] = "";
	
	printf("%d", ft_str_is_lowercase(frase));
	return (0);
}
*/
