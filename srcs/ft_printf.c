/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:51:06 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 16:07:51 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *formatString, ...)
{
	va_list	args;
	int		chars_written;
	int 	written;
	char	*pointer;

	va_start(args, formatString);
	pointer = (char *) formatString;
	chars_written = 0;
	while (*pointer != '\0')
	{
		if (*pointer != '%')
			chars_written += write(1, pointer++, 1);
		else
		{
			chars_written += print_parameter(pointer, args);
			pointer += 2;
		}
	}
	va_end(args);
	return (chars_written);
}
