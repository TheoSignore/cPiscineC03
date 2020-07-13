/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsignore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:36:10 by tsignore          #+#    #+#             */
/*   Updated: 2020/07/13 20:10:15 by tsignore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int size_dest;

	size_dest = ft_strlen(dest);
	j = 0;
	if (ft_strlen(dest) < size)
	{
		while ((j < size - size_dest - 1) && (j < ft_strlen(src)))
		{
			dest[size_dest + j] = src[j];
			j++;
		}
		dest[size_dest + j] = '\0';
		return (size_dest + ft_strlen(src));
	}
	else
		return (ft_strlen(dest) + ft_strlen(src) - (ft_strlen(dest) - size));
}
