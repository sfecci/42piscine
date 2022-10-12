/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:07:55 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/03 06:44:25 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}	
/*
int		main()
{
	char dest[10];
	char src[] = "focus";
	
	ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);;
}*/
