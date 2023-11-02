/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:44:56 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/31 15:19:00 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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

/*
int	main(void)
{
	char *s1;
	char *s2;

	s1 = "does it ";
	s2 = "work?";
	printf("%s\n", ft_strjoin(s1, s2));
}
*/
