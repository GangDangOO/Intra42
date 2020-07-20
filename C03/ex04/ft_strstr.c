/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saseo <saseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:35:49 by saseo             #+#    #+#             */
/*   Updated: 2020/07/20 16:37:03 by saseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_check_str(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j])
			{
				if (str[i + j] == to_find[j])
					j++;
				else
					break ;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char *answer;

	if (to_find[0] == '\0')
	{
		answer = &str[0];
		return (answer);
	}
	answer = ft_check_str(str, to_find);
	return (answer);
}
