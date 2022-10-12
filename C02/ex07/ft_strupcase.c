/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 06:43:32 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 07:30:07 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str [i] == '\0')
		{
			return (str);
		}
		i++;
	}
	return (str);
}
/*
int main ()
{
	char	str[] = "abcd";
	char	str2[] = "eeee";

	ft_strupcase(str);
	printf( "str; %s\n", ft_strupcase(str));
	printf( "str2; %s\n", ft_strupcase(str2));
}*/
