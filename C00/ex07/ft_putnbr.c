/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 21:58:03 by saseo             #+#    #+#             */
/*   Updated: 2020/07/13 22:41:29 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first(int nb)
{

}

void	ft_putnbr(int nb)
{
	if (nb < 10) return;
	ft_putnbr(nb / 10);
	char c;
	nb %= 10;
	c = nb + 48;
	write(1, &c, 1);
}

int		main(void)
{
	ft_putnbr(43424545);
}
