/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:02:30 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 15:30:25 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

static size_t	ft_getlen_itoh(intptr_t num, int sign)
{
	size_t	length;

	length = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 16;
		length++;
	}
	if (sign < 0)
		length++;
	return (length);
}

char	*ft_itoh(intptr_t n, int cap)
{
	char		*buffer;
	int			len;
	intptr_t	new_n;

	len = ft_getlen_itoh(n, 1);
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if (!(buffer))
		return (NULL);
	if (n == 0)
		buffer[0] = '0';
	buffer[len] = '\0';
	while (n != 0 && len >= 0)
	{
		new_n = n % 16;
		if (new_n < 10)
			buffer[len - 1] = new_n + 48;
		else if (new_n >= 10 && cap == 0)
			buffer[len - 1] = new_n + 87;
		else
			buffer[len - 1] = new_n + 55;
		n = n / 16;
		len--;
	}
	return (buffer);
}