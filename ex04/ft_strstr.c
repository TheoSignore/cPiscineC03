/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 09:13:13 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/08 15:33:02 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
		return (str);
	j = 0;
	i = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
		{
			j = 0;
			if (str[i] == to_find[j])
				j++;
		}
		else
			j++;
		if (to_find[j] == '\0')
			return (&str[i - (j - 1)]);
		i++;
	}
	return (0);
}
