/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:59:50 by saseo             #+#    #+#             */
/*   Updated: 2020/07/22 20:20:06 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int w;

	i = 2;
	if (nb < 1000)
		w = nb / 2;
	else
		w = 46000;
	while (i <= w)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	i = nb;
	while (1)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
}
