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
	int size;

	size = 0;
	while (*str_b != '\0')
	{	
		size++;
		str_b++;
	}
	return (size);
}

int validbase(char *base)
{
	char *aux;
	
	if (ft_strlen(base) < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == 32 || (*base >= 9 && *base <= 13))	
			return (0);
		aux = base + 1;
		while (*aux != '\0')
		{
			if(*aux == *base)
				return (0);
			aux++;
		}			
		base++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int i;

	num = 0;
	i = 0;
	while (*str != '\0')
	{
		i = 0;
		while (*str != base[i])
			i++;

		num = num * (ft_strlen(base) - 1) + (*str - '0');
		str++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
		
		printf("%d \n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
