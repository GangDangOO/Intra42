/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:55:59 by saseo             #+#    #+#             */
/*   Updated: 2020/07/15 19:30:10 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int min;
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		min = tab[i];
		j = i;
		while (j < size)
		{
			if (min > tab[j])
			{
				min = tab[j];
				tab[j] = tab[i];
				tab[i] = min;
				j = i;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
}
