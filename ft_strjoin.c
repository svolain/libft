/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:44:56 by vsavolai          #+#    #+#             */
/*   Updated: 2023/11/10 09:18:31 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(char const *s1, char const *s2, char *join)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		j++;
		i++;
	}
	join[i] = '\0';
	return (join);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	joinlen;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joinlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = malloc(sizeof(char) * (joinlen));
	if (join == 0)
		return (NULL);
	join = ft_join(s1, s2, join);
	return (join);
}
