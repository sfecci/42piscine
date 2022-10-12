/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:01:46 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/01 09:25:56 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void )
{
	int a;
	int b;
	int div;
	int mod;
	
		
	
	a = 5;
	b = 13;
	div = 0;
	mod = 0;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", mod);
	printf("%d\n", div);
	return (0);	
}*/
