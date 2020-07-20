/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:38:20 by saseo             #+#    #+#             */
/*   Updated: 2020/07/20 19:31:34 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void			ft_paste_str(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int i;
	unsigned int j;

	if (size == 0)
		return ;
	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	while (i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int answer;

	dest_len = ft_strlen(dest);
	answer = ft_strlen(src);
	ft_paste_str(dest, src, size);
	if (dest_len < size)
		answer += dest_len;
	else
		answer += size;
	return (answer);
}
