/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:49:24 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/25 08:49:26 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	trans_lower(char *str)
{
	char	*aux;

	aux = str;
	while (*aux != '\0')
	{
		if (*aux >= 'A' && *aux <= 'Z')
			*aux = *aux + 32;
		aux++;
	}		
}

int	ft_is_lowcase(char *lo_ca)
{
	if (*lo_ca >= 'a' && *lo_ca <= 'z')
		return (1);
	return (0);
}

int	ft_is_special(char *carater)
{
	if (!((*carater >= 'a' && *carater <= 'z')
			|| (*carater >= 'A' && *carater <= 'Z')
			|| (*carater >= '0' && *carater <= '9')))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*aux;

	trans_lower(str);
	aux = str;
	while (*aux != '\0')
	{	
		if (ft_is_lowcase(aux) && ft_is_special(aux - 1))
			*aux = *aux -32;
		aux++;
	}	
	return (str);
}

/*int	main(void)
{
	char frase[] = "OLA EU SOU O BRUNO 34!!jAFAF";
	
	printf("%s", ft_strcapitalize(frase));
	return (0);
}*/
