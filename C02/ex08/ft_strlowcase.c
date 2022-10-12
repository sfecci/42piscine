/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 07:20:56 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 07:31:33 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
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
	char	str[] = "AA";
	char 	str2[] = "SS";

	ft_strlowcase(str);
	printf( "str; %s\n", ft_strlowcase(str));
	printf( "str2; %s\n", ft_strlowcase(str2));
}*/
