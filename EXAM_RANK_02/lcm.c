/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:18:58 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 13:41:51 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	hcf(int a, int b)
{
	if (b == 0)
		return (a);
	else
		return (hcf(b, a % b));
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if ((int)a <= 0 || (int)b <= 0)
		return (0);
	return (a * b / hcf(a, b));
}
