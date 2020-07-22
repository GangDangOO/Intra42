/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:38:05 by saseo             #+#    #+#             */
/*   Updated: 2020/07/22 15:03:44 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int answer;

	if (power == 0)
		return (1);
	answer = nb;
	i = 0;
	while (i < power - 1)
	{
		answer *= nb;
		i++;
	}
	while (i > power + 1)
	{
		answer /= nb;
		power++;
	}
	return (answer);
}
