/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:15:15 by saseo             #+#    #+#             */
/*   Updated: 2020/07/21 12:29:36 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_base_error(char *base);

int		ft_convert(int nbr, int len, char *base, char answer[100])
{
	int i;
	int mod;

	i = 0;
	while (1)
	{
		mod = nbr % len;
		if (mod < 0)
			mod *= -1;
		answer[i] = base[mod];
		nbr /= len;
		i++;
		if (nbr < 0)
			nbr *= -1;
		if (nbr == 0)
			return (i);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		error;
	int		base_len;
	int		answer_len;
	char	answer[100];

	error = ft_base_error(base);
	if (error == 1)
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
		write(1, "-", 1);
	answer_len = ft_convert(nbr, base_len, base, answer);
	while (answer_len >= 0)
	{
		write(1, &answer[answer_len], 1);
		answer_len--;
	}
}
