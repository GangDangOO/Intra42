/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 15:46:58 by saseo             #+#    #+#             */
/*   Updated: 2020/07/18 17:07:11 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_char_all_upper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

void	ft_char_to_lower(char *str, int i)
{
	int j;

	j = i + 1;
	while (str[j] >= 'A' && str[j] <= 'Z')
	{
		str[j] += 32;
		j++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_char_all_upper(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_char_to_lower(str, i);
		if (str[i] >= '0' && str[i] <= '9')
			ft_char_to_lower(str, i);
		i++;
	}
	return (str);
}
