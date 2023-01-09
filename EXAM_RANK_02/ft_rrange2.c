/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:08:47 by duzun             #+#    #+#             */
/*   Updated: 2023/01/09 12:41:39 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int		*range;
	int		len;
	int		i;

	len = start - end;
	if (len < 0)
		len *= -1;
	range = (int *)malloc(sizeof(int *) * (len + 1));
	if (!range)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (start >= end)
		{
			range[len - i] = start;
			start--;
			i++;
		}
		else if (start <= end)
		{
			range[len - i] = start;
			start++;
			i++;
		}
	}
	return (range);
}

int	main(void)
{
	int	start;
	int	end;
	int	i;
	int	len;
	int	*range;

	start = -1;
	end = 3;
	len = start - end;
	if (len < 0)
		len *= -1;
	range = ft_rrange(start, end);
	i = 0;
	while (i <= len)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
