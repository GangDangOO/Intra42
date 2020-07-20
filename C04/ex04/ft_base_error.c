/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 22:14:39 by saseo             #+#    #+#             */
/*   Updated: 2020/07/20 22:14:46 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_error(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
			return (1);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (1);
	return (0);
}
