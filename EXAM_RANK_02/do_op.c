/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:30:23 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 18:02:50 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char **av)
{
	int		n1;
	int		n2;
	char	op;
	int		n;

	if (ac == 4)
	{
		n = 0;
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);
		op = av[2][0];
		if (op == '+')
			n = n1 + n2;
		else if (op == '-')
			n = n1 - n2;
		else if (op == '*')
			n = n1 * n2;
		else if (op == '/')
			n = n1 / n2;
		ft_putnbr(n);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
		return (0);
	}
}
