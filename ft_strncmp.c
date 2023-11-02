/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:34:59 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 09:52:26 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}

/*
int	main(void)
{
    printf("%d\n", ft_strncmp("ABI", "ABI", 3));
	printf("%d\n", ft_strncmp("ABI", "abi", 3));
	printf("%d\n", ft_strncmp("aBI", "Abi", 3));

	printf("%d\n", strncmp("ABI", "ABI", 3));
	printf("%d\n", strncmp("ABI", "abi", 3));
	printf("%d\n", strncmp("aBI", "Abi", 3));
}
*/
