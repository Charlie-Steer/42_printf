/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:06:31 by cargonz2          #+#    #+#             */
/*   Updated: 2024/01/05 12:44:54 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *str, ...)
{
	va_list args;
	va_start(args, str);

	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
			}
			else if (*str == 's')
			{

			}
			else if (*str == 'd')
			{
			}
		}
		else
		{
			ft_putchar_fd(*str, 1);
		}
		str++;
	}
	return (123); //n of characters printed.
}
