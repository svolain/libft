/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:29:36 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/29 15:09:49 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *found;

	found = NULL;
	while(*s)
	{
		if (*s == c)
			found = (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return found;
}

/*
int	main(void) {
		
	const char *str = "Hello.world";

	printf("%s\n", ft_strrchr(str, 'o'));
	printf("%s\n", strrchr(str, 'o'));
}
*/
