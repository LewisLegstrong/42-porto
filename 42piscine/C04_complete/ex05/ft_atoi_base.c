/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:30:13 by luiduart          #+#    #+#             */
/*   Updated: 2022/07/28 15:30:37 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	validbase(char *base)
{
	char	*aux;

	if (ft_strlen(base) < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == 32
			|| (*base >= 9 && *base <= 13))
			return (0);
		aux = base + 1;
		while (*aux != '\0')
		{
			if (*aux == *base)
				return (0);
			aux++;
		}			
		base++;
	}
	return (1);
}

int	cvrt_index(char c, char *base)
{
	int	i;

	i = 0;
	while ((*base != c) && (*base != '\0'))
	{
		i++;
		base++;
	}
	if (*base == '\0')
		return (-1);
	return (i - 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	index;

	index = ft_strlen(str);
	num = 0;
	while (*str != '\0' && cvrt_index(*str, base) > -1)
	{
		num = num + (cvrt_index(*str, base) * (ft_strlen(base) ^ index));
		str++;
		index--;
	}
	printf("%d\n\n", ft_strlen(base));
	return (num);
}

/*int	main(int argc, char *argv[])
{
	if (argc > 2)
		printf("%d \n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
*/