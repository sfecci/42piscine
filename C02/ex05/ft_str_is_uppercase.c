/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:55:23 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 15:34:22 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}			
	return (1);
}
/*
int main ()
{ 
	char	str[] = "AAA";
	char	str2[] = "Aaa2";

	ft_str_is_uppercase(str);
	printf( "str: %d\n", ft_str_is_uppercase(str));
	printf( "str2: %d\n", ft_str_is_uppercase(str2));
}*/
