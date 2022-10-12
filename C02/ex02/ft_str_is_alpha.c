/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:47:44 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 07:24:01 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}
/*
int main ()
{
	char str[] = "12364";
	char str2[] = "hola";
	
	ft_str_is_alpha(str);
	printf( "str: %d\n",ft_str_is_alpha(str));
	printf( "str2: %d\n", ft_str_is_alpha(str2));
}*/
