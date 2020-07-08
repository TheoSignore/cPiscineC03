/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 09:13:13 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/08 10:46:56 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	if (to_find[0] != '\0')
		return (str);
	k = -1;
	j = 0;
	i = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			k = j == 0 ? i : k;
		}
		else
			j = 0;
		i++;
	}
	if (to_find[j] == '\0')
		return (&str[k]);
	else
		return (0);
}
