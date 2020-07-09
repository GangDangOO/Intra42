/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:38:55 by saseo             #+#    #+#             */
/*   Updated: 2020/07/09 17:39:21 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(int arr[])
{
	int i;
	char c;

	i = 0;
	while (i < 3)
	{
		c = arr[i] + 48;
		write(1, &c, 1);
		i++;
	}
}

void	ft_while(int arr[], int count)
{
	char *comma;

	comma = ", ";
	while (1)
	{
		arr[2] += 1;
		if (arr[2] == 10)
		{
			arr[1] += 1;
			if (arr[1] == 9)
			{
				arr[0] += 1;
				arr[1] = arr[0] + 1;
			}
			arr[2] = arr[1] + 1;
		}
		ft_print(arr);
		if (arr[0] == 7 && arr[1] == 8 && arr[2] == 9)
		{
			break ;
		}
		write(1, &*comma, 2);
	}
}

void	ft_print_comb(void)
{
	int i[3];

	i[0] = 0;
	i[1] = 1;
	i[2] = 1;
	ft_while(i, 3);
}

int	main(void)
{
	ft_print_comb();
}
