/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:07:39 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 17:18:29 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 2)
	{
		i = 1;
		while (i <= ac - 1)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if (av[i][j] >= 'A' && av[i][j] <= 'Z')
				{
					if (av[i][j + 1] != ' ' && av[i][j + 1] != '\0')
						ft_putchar(av[i][j] + 32);
					else
						ft_putchar(av[i][j]);
				}
				else if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					if ((av[i][j + 1] == ' ') || \
						(av[i][j - 1] != ' ' && av[i][j + 1] == '\0') || \
						(av[i][j - 1] == ' ' && av[i][j + 1] == '\0'))
						ft_putchar(av[i][j] - 32);
					else
						ft_putchar(av[i][j]);
				}
				else
					write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
