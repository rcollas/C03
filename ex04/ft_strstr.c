/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:07:43 by rcollas           #+#    #+#             */
/*   Updated: 2021/03/22 12:36:14 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[j + 2]);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}
