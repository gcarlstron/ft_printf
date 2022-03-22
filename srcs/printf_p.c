/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:35:06 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 16:01:10 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int printf_p(va_list args)
{
    long int	num;
	char		*ptr;
	int			strlen;
	char		*hex;


    write(1, "0x", 2);
    ptr = va_arg(args, void*);
    num = (long int) ptr;
    hex = ft_itoh(num, 0);
	strlen = ft_strlen(hex);
	strlen = write(0, hex, strlen);
	free(hex);
	return (strlen+2);
}