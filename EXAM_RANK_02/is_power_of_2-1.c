/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2-1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:53:22 by duzun             #+#    #+#             */
/*   Updated: 2022/12/25 15:53:52 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n < 1)
		return (0);
	// Birinci Çözüm Yöntemi:

	// while (n != 1)
	// {
	//     if (n % 2 != 0)
	//         return (0);
	//     n /= 2;
	// }
	// return (1);

	// İkinci Çözüm Yöntemi:
	// Bit manipulasyonu yöntemi ile yapma (sadece 2 en küvvetlerinde geçerli):
	return (n & (n - 1) == 0);
	// 1: 0001
	// 2: 0010
	// 4: 0100
	// 8: 1000
	// yukarıdaki sayılarda görüleceği üzere 2 nin katlarında sadece 1 adet
	// 1 bit yer almaktadır.
	// sayıyı 1 eksiği ile bit & (and) liyerek oluşan yeni sayı sıfıra eşitse
	// bu sayının 2 nin tam kuvveti olduğunu söyleyebiliriz.
	// Örneğin: 8 sayısının 2 nin küvvetimi bakalım.
	// 1000 (8)
	// 0111 (7) bir eksiği
	// &----  bit and (&) işlemine tabi tutuyoruz.
	// 0000 (0) sıfır sayısını elde ederiz. Bu da bize 8 sayısının 2 nin kuvveti
	// olduğu anlamına gelir. Bu değer sıfıra  eşit olduğundan return değeri 1
	// olacak ve 1 i döndürecek.

}
