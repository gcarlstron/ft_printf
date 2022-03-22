/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:51:21 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 15:57:31 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_s(va_list args)
{
	char	*string;
	int		strlen;

	string = va_arg(args, char*);
	strlen = ft_strlen(string);
	strlen = write(0, string, strlen);
	return (strlen);
}
