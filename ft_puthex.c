/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:35:07 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/03 17:58:45 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char *base)
{
	int	i;

	i = 0;
	if (nb < 16)
		i += ft_putchar(base[nb]);
	if (nb >= 16)
	{
		i += ft_puthex(nb / 16, base);
		i += ft_puthex(nb % 16, base);
	}
	return (i);
}
