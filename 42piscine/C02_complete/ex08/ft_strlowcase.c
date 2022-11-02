/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:49:12 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/25 08:49:15 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux != '\0')
	{	
		if (*aux >= 'A' && *aux <= 'Z')
			*aux = *aux + 32;
		aux++;
	}	
	return (str);
}

/*
int	main(void)
{
	char frase[] = "JKAFAI aojdfafh 10983784-10=";
	
	printf("%s", ft_strlowcase(frase));
	return (0);
}
*/
