/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:56:00 by duzun             #+#    #+#             */
/*   Updated: 2023/01/07 15:56:19 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if ((av[i][j] >= 'a' && av[i][j] <= 'z') && \
				(av[i][j + 1] == ' ' || av[i][j + 1] == '\0'))
				{
					c = (av[i][j] - 32);
					ft_putchr(c);
				}
				else if (((av[i][j] >= 'A' && av[i][j] <= 'Z') && \
				(av[i][j + 1] != ' ')) && av[i][j + 1] != '\0' )
				{
					c = (av[i][j]) + 32;
					ft_putchr(c);
				}
				else
					ft_putchr(av[i][j]);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
