/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:47:51 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/25 11:47:53 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*aux;

	aux = str;
	while (*aux != '\0')
	{	
		if (!(*aux >= 32 && *aux < 127))
		{	
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[*aux / 16]);
			ft_putchar("0123456789abcdef"[*aux % 16]);
		}
		else
			ft_putchar(*aux);
		aux++;
	}	
}

/*int	main(void)
{
	char frase[] = "Coucou\ntu vas \tbien ?";

	ft_putstr_non_printable(frase);
	return (0);
}*/
