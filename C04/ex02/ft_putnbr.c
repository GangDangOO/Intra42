/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:44:27 by saseo             #+#    #+#             */
/*   Updated: 2020/07/21 12:20:45 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nb)
{
	char c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb > -10)
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		ft_print(nb);
		return ;
	}
	ft_putnbr(nb / 10);
	nb %= 10;
	if (nb < 0)
		nb *= -1;
	ft_print(nb);
}
