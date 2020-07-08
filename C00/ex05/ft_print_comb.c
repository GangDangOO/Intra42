/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:38:55 by saseo             #+#    #+#             */
/*   Updated: 2020/07/08 22:15:03 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(int[] arr)
{
	printf(arr);
}

void	ft_print_comb(void)
{
	int i[3];
	char *comma;

	i[0] = 0;
	i[1] = 1;
	i[2] = 1;
	comma = ", ";
	while (1)
	{
		i[2] += 1;
		if (i[2] == 10)
		{
			i[1] += 1;
			if (i[1] == 9)
			{
				i[0] += 1;
				i[1] = i[0] + 1;
			}
			i[2] = i[1] + 1;
		}
		ft_write(i);
		if (i[0] == 7 && i[1] == 8 && i[2] == 9)
		{
			break ;
		}
		write(1, &*comma, 2);
	}
}

int	main()
{
	ft_print_comb();
}
