/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:53:38 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/04 20:07:41 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0' && i < nb)
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
	int	nb;

	nb = 2;
	printf("%s", ft_strncat(x, j, nb));
	return (0);
}*/
