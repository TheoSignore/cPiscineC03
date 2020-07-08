/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:36:10 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/08 21:26:18 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int realsize;

	realsize = ft_strlen(dest);
	if ((realsize + ft_strlen(src)) > size - 1)
		return (realsize + ft_strlen(src) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dest[realsize] = src[i];
		i++;
		realsize++;
	}
	dest[realsize] = '\0';
	return (realsize);
}
