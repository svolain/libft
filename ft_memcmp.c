/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:13:16 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/27 06:04:55 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (i < n)
	{
		if ((cs1[i] > cs2[i]) || (cs1[i] < cs2[i]))
		{
			return (cs1[i] - cs2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("ABI", "ABI", 3));
	printf("%d\n", ft_memcmp("ABI", "abi", 3));
	printf("%d\n", ft_memcmp("abi", "ABI", 3));

	printf("%d\n", memcmp("ABI", "ABI", 3));
	printf("%d\n", memcmp("ABI", "abi", 3));
	printf("%d\n", memcmp("abi", "ABI", 3));
}
*/
