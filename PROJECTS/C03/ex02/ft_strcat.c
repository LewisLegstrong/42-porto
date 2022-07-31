/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:00:10 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/26 11:00:12 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	while (*aux != '\0')
		aux++;
	while (*src != '\0')
	{
		*aux = *src;
		aux++;
		src++;
	}
	*aux = '\0';
	return (dest);
}

/*int	main(void)
{
	char	frase1[20] = "Hello";
	char	frase2[] = "Ola";

	ft_strcat(frase1, frase2);
	printf("%s\n", frase1);
	return (0);
}
*/