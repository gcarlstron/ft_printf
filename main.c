/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:52:33 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/29 18:13:40 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int				testei;
	int				tested;
	char			testec;
	char			*testes;
	void			*testep;
	unsigned int	testeu;
	int				testex;
	int				myretorno;
	int				retorno;

	testei = 4242;
	tested = -4242;
	testec = 'c';
	testes = NULL;
	testep = NULL;
	testeu = 0;
	testex = 9999;
	myretorno = ft_printf("i : %i\n", testei);
	printf("%i\n", myretorno);
	myretorno += ft_printf("d : %d\n", tested);
	printf("%i\n", myretorno);
	myretorno += ft_printf("c : %c\n", testec);
	printf("%i\n", myretorno);
	myretorno += ft_printf("s : %s\n", testes);
	printf("%i\n", myretorno);
	myretorno += ft_printf("p : %p\n", testep);
	printf("%i\n", myretorno);
	myretorno += ft_printf("u : %u\n", testeu);
	printf("%i\n", myretorno);
	myretorno += ft_printf("x : %x\n", testex);
	printf("%i\n", myretorno);
	myretorno += ft_printf("X : %X\n", testex);
	printf("%i\n", myretorno);
	ft_printf("myretorno : %i\n", myretorno);
	printf("-------------------------------\n");
	retorno = printf("i : %i\n", testei);
	printf("%i\n", retorno);
	retorno += printf("d : %d\n", tested);
	printf("%i\n", retorno);
	retorno += printf("c : %c\n", testec);
	printf("%i\n", retorno);
	retorno += printf("s : %s\n", testes);
	printf("%i\n", retorno);
	retorno += printf("p : %p\n", testep);
	printf("%i\n", retorno);
	retorno += printf("u : %u\n", testeu);
	printf("%i\n", retorno);
	retorno += printf("x : %x\n", testex);
	printf("%i\n", retorno);
	retorno += printf("X : %X\n", testex);
	printf("%i\n", retorno);
	printf("retorno : %i\n", retorno);
	return (0);
}
