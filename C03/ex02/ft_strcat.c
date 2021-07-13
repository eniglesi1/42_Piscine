/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-a <jgomez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:18:56 by jgomez-a          #+#    #+#             */
/*   Updated: 2021/07/13 16:57:31 by jgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	decimator;

	decimator = 0;
	while (*str != '\0')
	{
		decimator++;
		str++;
	}
	return (decimator);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}
