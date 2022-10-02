/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42.istanbul.com.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:34:31 by iustoglu          #+#    #+#             */
/*   Updated: 2022/09/27 14:56:45 by iustoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_scan(char c, va_list arg);
int	ft_printf(const char *sign, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_convert(size_t data, char *base);
int	ft_putnbr(int nbr);

#endif
