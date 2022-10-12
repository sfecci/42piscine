/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:53:55 by sfecci            #+#    #+#             */
/*   Updated: 2022/05/30 11:07:08 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
// 
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}	
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 12;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", b);
	printf("%d\n", a);
	return (0);
}*/
