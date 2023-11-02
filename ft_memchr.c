/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:56:39 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 09:15:59 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	unsigned char	*cbuf;
	size_t			i;

	cbuf = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (*cbuf == (unsigned char)c)
		{
			return (cbuf);
		}
		cbuf++;
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	const char	*str = "Hello.world";
	const char	*cstr = "Hello.world";
 
	printf("%s\n", ft_memchr(str, 'e', 3));
	printf("%s\n", memchr(cstr, 'e', 3));
	return 0;
}
*/
