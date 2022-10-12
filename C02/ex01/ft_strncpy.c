/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:13:48 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/04 17:48:09 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
	dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main ()
{
	char src [] = "kitt";
	char dest[3] = "sol";

	ft_strncpy(dest, src, 7);
	printf( "dest: %s", dest);
	return(0);
}*/
