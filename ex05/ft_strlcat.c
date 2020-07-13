/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:36:10 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/13 11:17:16 by tsignore         ###   ########.fr       */
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
	unsigned int j;
	unsigned int dst_len;
	unsigned int src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dst_len;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (dst_len < size)
	{
		dest[j] = '\0';
		return (dst_len + src_len);
	}
	return (dst_len + src_len - (dst_len - size));
}
