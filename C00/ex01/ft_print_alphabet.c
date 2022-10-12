/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:23:43 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 10:32:57 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// no line
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)

{
	char	c;

	c = 'a';
	while (c <= 'z')
	{			
		ft_putchar(c);
		c++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
	return(0);
}*/
