/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:37:06 by saseo             #+#    #+#             */
/*   Updated: 2020/07/22 14:06:33 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int answer;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	answer = nb;
	while (nb > 1)
	{
		nb--;
		answer *= nb;
	}
	return (answer);
}
