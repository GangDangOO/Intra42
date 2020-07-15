/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:31:36 by saseo             #+#    #+#             */
/*   Updated: 2020/07/15 11:50:25 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_while(int i, int num, int a, char c[10])
{
	int j;
	int n;

	if (i == a)
	{
		n = 0;
		while (n < a)
		{
			write(1, &c[n], 1);
			n++;
		}
		if (!(c[0] == '0' + 10 - n))
			write(1, ", ", 2);
		return ;
	}
	j = num;
	while (j < 10)
	{
		c[i] = j + 48;
		ft_while(i + 1, j + 1, a, c);
		j++;
	}
}

void	ft_print_combn(int a)
{
	char	c[10];
	int		i;
	int		num;

	i = 0;
	num = 0;
	ft_while(i, num, a, c);
}
