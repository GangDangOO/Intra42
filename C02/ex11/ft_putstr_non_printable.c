/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:02:07 by saseo             #+#    #+#             */
/*   Updated: 2020/07/20 14:02:15 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_change_char(char *str, int n, char hex[20])
{
	unsigned char	c;
	int				i;
	int				mod;

	c = str[n];
	i = 0;
	while (1)
	{
		mod = c % 16;
		if (mod < 10)
			hex[i] = '0' + mod;
		else
			hex[i] = 'a' + (mod - 10);
		c /= 16;
		i++;
		if (c == 0)
		{
			hex[i] = '0';
			break ;
		}
	}
}

void	ft_print(char *str, int n)
{
	char hex[20];

	ft_change_char(str, n, hex);
	write(1, "\\", 1);
	write(1, &hex[1], 1);
	write(1, &hex[0], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			ft_print(str, i);
		else
			write(1, &str[i], 1);
		i++;
	}
}
