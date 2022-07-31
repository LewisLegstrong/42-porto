/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:42:22 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/21 19:42:26 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{	
		if (! ((*str >= 'a' && *str <= 'z')
				|| (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	frase[] = "Hell4o";

	printf("%d", ft_str_is_alpha(frase));
	return (0);
}
*/
