/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:31:20 by ofadahun          #+#    #+#             */
/*   Updated: 2023/04/07 15:30:29 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

void	*ft_memset(void *s, int c, size_t len)
{
	char	*tmp;

	tmp = (char *)s;
	while (len--)
	{
		*((char *)tmp) = c;
		tmp++;
	}
	return (s);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen (src);
	if (dstsize != 0)
	{
		while (*src && --dstsize)
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
	}
	return (len);
}
