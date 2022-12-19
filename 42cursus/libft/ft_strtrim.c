/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:28:57 by luiduart          #+#    #+#             */
/*   Updated: 2022/11/26 15:28:59 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*trimmmmed;
	int		len;
	int		i;
	int		j;

	len = ft_strlen((char *)s1);
	trimmmmed = malloc(sizeof(char) * len);
	if (!trimmmmed)
		retun (NULL);
	while(s1[i] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;			
		}			
	}
}
