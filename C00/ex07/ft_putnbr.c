/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 21:58:03 by saseo             #+#    #+#             */
/*   Updated: 2020/07/15 10:30:49 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	nb %= 10;
	c = nb + 48;
	write(1, &c, 1);
}