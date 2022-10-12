/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:21:45 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/06 15:12:54 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}	
	dest[n] = '\0';
	return (dest);
}
/*
int main ()
{
	char	x[6] = "kit";
	char	j[] = "kat";	

	printf("%s", ft_strcat(x, j));
	return (0);
}*/
