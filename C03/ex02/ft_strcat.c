/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:02:27 by saseo             #+#    #+#             */
/*   Updated: 2020/07/21 13:27:28 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int dest_tail;
	int i;

	dest_tail = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_tail + i] = src[i];
		i++;
	}
	dest[dest_tail + i] = '\0';
	return (dest);
}
