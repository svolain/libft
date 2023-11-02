/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:59:06 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/27 10:33:06 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    return (i);
}

static char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strdup(const char *s1)
{
	char    *dup;
    int     strlen;

    strlen = ft_strlen((char *)s1);
    dup = (char *)malloc(sizeof(char) * (strlen + 1));
    if (dup == '\0')
        return (0);
    ft_strcpy(dup, (char *)s1);
    return (dup);	
}

/*
int main(void)
{
	const char	*s1;
	const char *s2;

	s1 = "abcd";
	s2 = ft_strdup(s1);
	printf("%s\n", s2);
}
*/
