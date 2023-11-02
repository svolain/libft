/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:16:12 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/25 10:08:26 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = b;
	while (i < len)
	{
		*p = c;
		p++;
		i++;
	}
	return (b);
}

/*
int main(void)
{
	char str[6] = "abcde";
	char strr[6] = "abcde";
	
	printf("%s\n", ft_memset(str, '0', 6));
	printf("%s\n", memset(strr, '8', 6));

    return (0);
}
*/
