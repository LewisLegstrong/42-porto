/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:49:00 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/25 08:49:03 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*aux;

	aux = str;
	while (*aux != '\0')
	{	
		if (*aux >= 'a' && *aux <= 'z')
			*aux = *aux - 32;
		aux++;
	}	
	return (str);
}

/*int	main(void)
{
	char frase[] = "hel lo oi1-==-0afajpj";
	
	printf("%s", ft_strupcase(frase));
	return (0);
}*/
