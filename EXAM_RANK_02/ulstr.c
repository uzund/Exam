/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:41:52 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 12:24:59 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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
		while (s[i] != 0)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				ft_putchar(s[i] + 32);
			else if (s[i] >= 'a' && s[i] <= 'z')
				ft_putchar(s[i] - 32);
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
