/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:36:48 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/29 17:57:47 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_u(va_list args)
{
    unsigned int    num;
	char	        *num_str;
	int		        strlen;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return write(1, "0", 1);
	num_str = ft_utoa(num);
	strlen = ft_strlen(num_str);
	strlen = write(1, num_str, strlen);
	free(num_str);
	return (strlen);
}