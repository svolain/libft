/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 06:17:10 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/29 15:07:28 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	while (*s != '\0')
	{
		if(*s == c)
			return (char *) s;
		s++;
	}
	if (c == '\0')
		return (char *) s;
	return (NULL);
}
/*
int main(void) {
    const char *str = "Hello.world";
    char c = 'l';
   
    printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
}
*/
