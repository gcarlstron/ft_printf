/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_parameter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:46:59 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 16:20:19 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_parameter(char *pointer, va_list args)
{
	int chars_written;
	chars_written = 0;
	pointer++;
	if (*pointer == 'i' || *pointer == 'd')
		chars_written += printf_d_i(args);
	if (*pointer == 'c')
		chars_written += printf_c(args);
	if (*pointer == 's')
		chars_written += printf_s(args);
	if (*pointer == 'p')
		chars_written += printf_p(args);
	if (*pointer == 'u')
		chars_written += printf_u(args);
	if (*pointer == 'x' || *pointer == 'X')
		chars_written += printf_x(args, (char*)pointer);
	return (chars_written);
}
