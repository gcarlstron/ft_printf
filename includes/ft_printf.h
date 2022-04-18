/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:50:07 by gpacheco          #+#    #+#             */
/*   Updated: 2022/04/14 10:51:51 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		print_parameter(char *pointer, va_list args);

char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_itoh(unsigned long int n, int cap);
int		ft_isprint(int c);
size_t	ft_strlen(const char *c);

int		printf_d_i(va_list args);
int		printf_c(va_list args);
int		printf_s(va_list args);
int		printf_p(va_list args);
int		printf_u(va_list args);
int		printf_x(va_list args, char *pointer);

#endif
