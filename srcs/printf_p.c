/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:35:06 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/29 18:26:02 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_p(va_list args)
{
	unsigned long int	num;
	char				*ptr;
	int					strlen;
	char				*hex;

	ptr = va_arg(args, void *);
	num = (unsigned long int)ptr;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	hex = ft_itoh(num, 0);
	strlen = ft_strlen(hex);
	strlen = write(1, hex, strlen);
	free(hex);
	return (strlen + 2);
}
