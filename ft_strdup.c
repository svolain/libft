/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:59:06 by vsavolai          #+#    #+#             */
/*   Updated: 2023/11/10 09:18:06 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		strlen;

	strlen = ft_strlen((char *)s1);
	dup = (char *)malloc(sizeof(char) * (strlen + 1));
	if (dup == '\0')
		return (0);
	ft_strcpy(dup, (char *)s1);
	return (dup);
}
