/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:55:30 by duzun             #+#    #+#             */
/*   Updated: 2023/01/07 13:14:36 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*range;

	if (start < end)
		size = end - start;
	else if (start > end)
		size = start - end;
	else
		size = 0;
	range = (int *)malloc(sizeof(int) * (size + 1));
	if (!range)
		return (NULL);
	i = 0;
	while (start != end)
	{
		if (start < end)
		{
			range[i] = start;
			start += 1;
			i++;
		}
		else
		{
			range[i] = start;
			start -= 1;
			i++;
		}
	}
	range[i] = start;
	return (range);
}

int	main(void)
{
	int	i;
	int	*range;

	range = ft_range(1, -3);
	i = 0;
	while (i < 5)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
