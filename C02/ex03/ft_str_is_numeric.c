/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 09:32:52 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 07:25:05 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}	
/*
int main ()
{
	char str[] = "12364";
	char str2[] = "hola";
	
	ft_str_is_numeric(str);
	printf( "str: %d\n",ft_str_is_numeric(str));
	printf( "str2: %d\n", ft_str_is_numeric(str2));
}*/
