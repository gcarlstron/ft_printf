/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:22:23 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 13:15:12 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	len_n(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static	void	n_to_str(char *r, int l, unsigned int n)
{
	r[l] = '\0';
	while (l--)
	{
		r[l] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_utoa(unsigned int n)
{
	char	*r;
	int		l;

	l = len_n(n);
	r = (char *)malloc(sizeof(char) * l + 1);
	if (!r)
		return (NULL);
	n_to_str(r, l, n);
	return (r);
}
