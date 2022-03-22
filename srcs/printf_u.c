/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:36:48 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 15:57:27 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_u(va_list args)
{
    unsigned int    num;
	char	        *num_str;
	int		        strlen;

	num = va_arg(args, unsigned int);
	num_str = ft_utoa(num);
	strlen = ft_strlen(num_str);
	strlen = write(0, num_str, strlen);
	free(num_str);
	return (strlen);
}