/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:33:43 by gpacheco          #+#    #+#             */
/*   Updated: 2022/04/14 10:52:12 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_d_i(va_list args)
{
	int		num;
	char	*num_str;
	int		strlen;

	num = va_arg(args, int);
	num_str = ft_itoa(num);
	strlen = ft_strlen(num_str);
	strlen = write(1, num_str, strlen);
	free(num_str);
	return (strlen);
}
