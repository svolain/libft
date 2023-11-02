/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 06:19:34 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 13:11:24 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*r;
	size_t	i;
	size_t	j;

	r = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return (r);
	while (0 < len && haystack[i] != '\0')
	{
		while (needle[j] == haystack[i] && len > 0)
		{
			i++;
			j++;
			len--;
			if (needle[j] == '\0')
				return (r);
		}
		i = i - j + 1;
		j = 0;
		len--;
		r++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t    max = strlen(s2);

    char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i1);
	printf("%s\n", i2);
	}
*/
