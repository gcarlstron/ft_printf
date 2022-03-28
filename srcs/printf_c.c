/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:51:21 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/23 14:14:56 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_c(va_list args)
{
	char	character;
	int		strlen;
	
	character = va_arg(args, int);
	strlen = write(1, &character, 1);
	return (strlen);
	}
