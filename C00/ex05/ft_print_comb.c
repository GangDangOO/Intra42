/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:21:34 by saseo             #+#    #+#             */
/*   Updated: 2020/07/18 12:09:09 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_output(int a, int b, char c[])
{
	int	i;

	if (a == 3)
	{
		write(1, &c[0], 1);
		write(1, &c[1], 1);
		write(1, &c[2], 1);
		if (!(c[0] == '7' && c[1] == '8' && c[2] == '9'))
		{
			write(1, ", ", 2);
		}
		return ;
	}
	i = b;
	while (i < 10)
	{
		c[a] = i + 48;
		ft_output(a + 1, i + 1, c);
		i++;
	}
}

void	ft_print_comb(void)
{
	char c[3];

	ft_output(0, 0, c);
}
