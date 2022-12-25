/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:04:53 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 22:07:38 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_atoi(char *s)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			sign = -1;
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = (s[i] - '0') + (n * 10);
		i++;
	}
	return (n * sign);
}

int	ft_is_prime(int n)
{
	int	prime;

	prime = n / 2;
	if (n <= 1)
		return (0);
	if (n == 2 || (prime * 2) != n)
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	prime;
	int	sum;

	if (ac == 2)
	{
		prime = ft_atoi(av[1]);
		if (prime < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		sum = 0;
		i = 0;
		while (i <= prime)
		{
			if (ft_is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "0\n", 2);
		return (0);
	}
}
