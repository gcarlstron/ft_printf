/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:22:23 by gpacheco          #+#    #+#             */
/*   Updated: 2022/02/23 19:48:33 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	len_n(int n)
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

static	void	n_to_str(char *r, int l, int n)
{
	r[l] = '\0';
	if (n < 0)
	{
		while (--l)
		{
			r[l] = (n % 10) * -1 + '0';
			n /= 10;
		}
		r[l] = '-';
	}
	else
	{
		while (l--)
		{
			r[l] = (n % 10) + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*r;
	int		l;
	int		ng;

	ng = 0;
	if (n <= 0)
	{
		ng = 1;
	}
	l = len_n(n) + ng;
	r = (char *)malloc(sizeof(char) * l + 1);
	if (!r)
		return (NULL);
	n_to_str(r, l, n);
	return (r);
}
