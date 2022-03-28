/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:37:09 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/23 14:15:26 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_x(va_list args, char *pointer)
{
    unsigned int    num;
	char	        *num_str;
	int		        strlen;

	num = va_arg(args, int);
    if (*pointer == 'x' )
	    num_str = ft_itoh(num, 0);
    if (*pointer == 'X' )
	    num_str = ft_itoh(num, 1);
	strlen = ft_strlen(num_str);
	strlen = write(1, num_str, strlen);
	free(num_str);
	return (strlen);
}