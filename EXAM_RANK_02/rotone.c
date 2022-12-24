/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:11:19 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 17:30:24 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		i;
	char	*s;

	if (ac == 2)
	{
		s = av[1];
		i = 0;
		while (s[i] != '\0')
		{
			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			{
				if (s[i] == 'Z')
					ft_putchar('A');
				else if (s[i] == 'z')
					ft_putchar('a');
				else
					ft_putchar(s[i] + 1);
			}
			else
				write(1, &s[i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
