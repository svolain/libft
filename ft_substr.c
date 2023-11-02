/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:31:38 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/31 10:37:32 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t	len)
{
	char	*sub;
	size_t	sublen;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	sublen = len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (s[i] == '\0' || start >= ft_strlen(s))
		return (sub);
	while (i < len && s[i] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

/*
int	main(void)
{
	char *s = "bread loaf";
	char *ret = ft_substr(s, 8, 5);
	printf("%s\n", ret);
	free(ret);
}
*/
