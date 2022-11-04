/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:37:58 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/03 17:49:42 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Libraries */

# include <stdarg.h>
# include <unistd.h>

int	ft_putunsigned(unsigned int nb);

int	ft_puthex(unsigned long nb, char *base);

int	ft_putchar(char c);

int	ft_putnbr(int c);

int	ft_putstr(char *str);

int	ft_printf(const char *format, ...);
#endif