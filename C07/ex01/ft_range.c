/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfecci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:15:49 by sfecci            #+#    #+#             */
/*   Updated: 2022/06/12 16:09:06 by sfecci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{	
		return (0);
	}
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
