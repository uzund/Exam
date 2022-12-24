/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeal_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:00 by duzun             #+#    #+#             */
/*   Updated: 2022/12/24 17:58:17 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	int		x;
	char	*s;

	if (ac == 2)
	{
		i = 0;
		s = av[1];
		while (s[i] != '\0')
		{
			j = 65;
			x = 97;
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				while (s[i] >= j)
				{
					write(1, &s[i], 1);
					j++;
				}
			}
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				while (s[i] >= x)
				{
					write(1, &s[i], 1);
					x++;
				}
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
