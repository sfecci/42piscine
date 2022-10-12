/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:07:17 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 07:25:53 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}	
	return (1);
}
/*
int main ()
{ 
	char	str[] = "aaaa";
	char	str2[] = "aAa12";

	ft_str_is_lowercase(str);
	printf( "str: %d\n", ft_str_is_lowercase(str));
	printf( "str2: %d\n", ft_str_is_lowercase(str2));
}*/
