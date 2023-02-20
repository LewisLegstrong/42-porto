/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiduart <luiduart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:28:16 by luiduart          #+#    #+#             */
/*   Updated: 2023/02/20 15:57:16 by luiduart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		format_set(va_list ap, const char type);
int		ft_printf(const char *frame, ...);
char	*ft_unitoa(unsigned int n);
int		print_uint(unsigned int num, int fd);
int		print_ch(char c, int fd);
int		print_str(char *str, int fd);
int		print_int(int num, int fd);
char	*ft_hex_unitoa(unsigned int n);
int		print_hex(char type, unsigned int num, int fd);
char	*ft_ptr_unitoa(unsigned long long n);
int		print_ptr(unsigned long long num, int fd);

#endif