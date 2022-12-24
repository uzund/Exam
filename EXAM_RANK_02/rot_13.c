/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:11:46 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 19:26:08 by duzun            ###   ########.fr       */
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
		i = 0;
		s = av[1];
		while (s[i] != '\0')
		{
			if (s[i] >= 'A' && s[i] <= 'M')
				ft_putchar(s[i] + 13);
			else if (s[i] >= 'N' && s[i] <= 'Z')
				ft_putchar(s[i] - 13);
			else if (s[i] >= 'a' && s[i] <= 'm')
				ft_putchar(s[i] + 13);
			else if (s[i] >= 'n' && s[i] <= 'z')
				ft_putchar(s[i] - 13);
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
