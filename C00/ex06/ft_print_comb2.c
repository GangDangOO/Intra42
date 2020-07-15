/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 20:16:10 by saseo             #+#    #+#             */
/*   Updated: 2020/07/15 22:47:51 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_upcount(char a[2], char b[2])
{
	if (a[1] == 58)
	{
		a[1] = 48;
		a[0]++;
	}
	if (a[0] == 58)
	{
		b[1]++;
		if (b[1] == 58)
		{
			b[1] = 48;
			b[0]++;
		}
		a[0] = b[0];
		a[1] = b[1] + 1;
		ft_upcount(a, b);
	}
}

void	ft_write(char a[2], char b[2])
{
	write(1, &b[0], 1);
	write(1, &b[1], 1);
	write(1, " ", 2);
	write(1, &a[0], 1);
	write(1, &a[1], 1);
	if (!(b[0] == '9' && b[1] == '8'))
	{
		write(1, ", ", 2);
	}
}

void	ft_while(int n, char a[2], char b[2])
{
	while (!(b[0] == '9' && b[1] == '8'))
	{
		ft_write(a, b);
		a[1]++;
		ft_upcount(a, b);
	}
	ft_write(a, b);
}

void	ft_print_comb2(void)
{
	char a[2];
	char b[2];

	a[0] = 48;
	a[1] = 48;
	b[0] = 48;
	b[1] = 48;
	ft_while(0, a, b);
}

int		main(void)
{
	ft_print_comb2();
}
