/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:57:15 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/08 17:48:35 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int s1_len;
	int s2_len;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (i <= s1_len && i <= s2_len)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
