/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:26:56 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/04 18:40:53 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int main ()
{
	char	str[] = "~";
	char	str2[] = "v";

	ft_str_is_printable(str);
	printf( "str: %d\n", ft_str_is_printable(str));
	printf("str2: %d\n", ft_str_is_printable(str2));
}*/
