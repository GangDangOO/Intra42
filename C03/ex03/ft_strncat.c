/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:13:02 by saseo             #+#    #+#             */
/*   Updated: 2020/07/20 15:16:53 by saseo            ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_tail;
	unsigned int	i;

	dest_tail = ft_strlen(dest);
	i = 0;
	while (i < nb)
	{
		dest[dest_tail + i] = src[i];
		i++;
	}
	dest[dest_tail + i] = '\0';
	return (dest);
}
