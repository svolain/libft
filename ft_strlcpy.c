/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:41:52 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 10:01:29 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char dst[5] = "abcd";
    const char src[6] = "zizzz";
	char cdst[5] = "abcd";
	const char csrc[6] = "zizzz";
	int i;

	i = 0;
	printf("%s\n", dst);
	printf("%s\n", cdst);
	printf("%zu\n", ft_strlcpy(dst, src, 5));
	printf("%zu\n", strlcpy(cdst, csrc, 5));
	printf("%s\n", dst);
	printf("%s\n", cdst);


	while(dst[i] != '\0')
	{
		printf("%d\n", dst[i]);
		i++;
	}
	i = 0;
	while(cdst[i] != '\0')
    {
        printf("%d\n", cdst[i]);
        i++;
    }
	
}*/
