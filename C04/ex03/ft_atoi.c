/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 20:22:10 by saseo             #+#    #+#             */
/*   Updated: 2020/07/20 21:14:35 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sign(char *str, int i, int n)
{
	if (str[i] == '-')
		n *= -1;
	return (n);
}

int		ft_find_num(char *str, int i)
{
	int j;
	int num;

	j = i;
	num = 0;
	while (str[j])
	{
		if (str[j] >= '0' && str[j] <= '9')
		{
			num *= 10;
			num += (str[j] - '0');
			j++;
		}
		else
			return (num);
	}
	return (num);
}

int		ft_atoi(char *str)
{
	int i;
	int answer;
	int sign;

	sign = 1;
	answer = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		{
			i++;
			continue ;
		}
		if (str[i] == '-' || str[i] == '+')
		{
			sign = ft_sign(str, i, sign);
			i++;
			continue ;
		}
		answer = ft_find_num(str, i);
		break ;
	}
	answer *= sign;
	return (answer);
}
