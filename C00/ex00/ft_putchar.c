/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:47:13 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 10:23:05 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('a');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
