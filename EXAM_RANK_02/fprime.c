/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:11:03 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 22:36:18 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	n;
	int	i;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		i = 2;
		while (n > 1)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				n /= i;
				if (n > 1)
					printf("*");
			}
			else
					i++;
		}
		printf("\n");
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
