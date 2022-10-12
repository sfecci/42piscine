/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:28:09 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 10:38:50 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
// revome that line
void	ft_print_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
/*
int      main(void)
{
    ft_print_alphabet();
    return (0);
}*/
