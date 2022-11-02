/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:48:40 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/25 08:48:43 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{	
		if ((*str >= 0 && *str <= 31) || *str == 127)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char frase[] = "o\tla";
	
	printf("%d", ft_str_is_printable(frase));
	return (0);
}*/
