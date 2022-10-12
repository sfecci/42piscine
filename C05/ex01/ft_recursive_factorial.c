/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:49:35 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/08 10:35:20 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
*/
