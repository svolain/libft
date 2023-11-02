/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:33 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/27 12:11:49 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	csrc = (char *)src;
	cdst = (char *)dst;
	i = 0;
	if ((cdst == NULL) && (csrc == NULL))
		return NULL;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char dst[5] = "abcd";
	char cdst[5] = "abcd";
	const char src[5] = "zzzz";
	const char csrc[5] = "zzzz";
	
	ft_memcpy(dst, src, 2);
	memcpy(cdst, csrc, 2);
	printf("%s\n", dst);
	printf("%s\n", cdst);

}
*/
