/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:52:33 by gpacheco          #+#    #+#             */
/*   Updated: 2022/03/09 16:04:40 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int testei = 4242;
	int tested = 4242;
	char testec = 'c';
	char *testes = "testado uma string";
	void *testep = &testes;
	unsigned int testeu = -4242;
	int testex = 4242;
	int myretorno;
	int retorno;
	
	myretorno = ft_printf("i : %i\n", testei);
	printf("%i\n",myretorno);
	myretorno += ft_printf("d : %d\n", tested);
	printf("%i\n",myretorno);
	myretorno += ft_printf("c : %c\n", testec);
	printf("%i\n",myretorno);
	myretorno += ft_printf("s : %s\n", testes);
	printf("%i\n",myretorno);
	myretorno += ft_printf("p : %p\n", testep);
	printf("%i\n",myretorno);
	myretorno += ft_printf("u : %u\n", testeu);
	printf("%i\n",myretorno);
	myretorno += ft_printf("x : %x\n", testex);
	printf("%i\n",myretorno);
	myretorno += ft_printf("X : %X\n", testex);
	printf("%i\n",myretorno);
	ft_printf("myretorno : %i\n", myretorno);
	retorno = printf("i : %i\n", testei);
	retorno += printf("d : %d\n", tested);
	retorno += printf("c : %c\n", testec);
	retorno += printf("s : %s\n", testes);
	retorno += printf("p : %p\n", testep);
	retorno += printf("u : %u\n", testeu);
	retorno	+= printf("x : %x\n", testex);
	retorno += printf("X : %X\n", testex);
	printf("retorno : %i\n", retorno);

	return (0);
}
