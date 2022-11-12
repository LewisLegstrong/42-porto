/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:54:29 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/28 10:54:32 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str_b)
{
	int	size;

	size = 0;
	while (*str_b != '\0')
	{	
		size++;
		str_b++;
	}
	return (size);
}

int	validbase(char *str_b)
{
	char	*aux;

	while (*str_b)
	{
		if (*str_b == '+' || *str_b == '-')
			return (0);
		aux = str_b + 1;
		while (*aux != '\0')
		{
			if (*aux == *str_b)
				return (0);
			aux++;
		}			
		str_b++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (validbase(base) == 1)
	{
		if (nbr == (-2147483648))
		{
			ft_putnbr_base((nbr / ft_strlen(base)), base);
			ft_putnbr_base((nbr % ft_strlen(base) * -1), base);
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * (-1);
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= 0 && nbr <= (ft_strlen(base) - 1))
			ft_putchar(base[nbr]);
		else if (nbr > (ft_strlen(base) - 1))
		{
			ft_putnbr_base((nbr / ft_strlen(base)), base);
			ft_putnbr_base((nbr % ft_strlen(base)), base);
		}
	}
}

/*int	main(void)
{
	int		nbr;
	char	base[] = "0123456789ABCDEF";

	nbr = -2147483648;
	ft_putnbr_base(nbr, base);
	return (0);
}*/
