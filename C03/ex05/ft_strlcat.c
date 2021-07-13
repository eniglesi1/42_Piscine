/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-a <jgomez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:21:34 by jgomez-a          #+#    #+#             */
/*   Updated: 2021/07/13 16:57:09 by jgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	decimator;

	decimator = 0;
	while (*str != '\0')
	{
		decimator++;
		str++;
	}
	return (decimator);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
