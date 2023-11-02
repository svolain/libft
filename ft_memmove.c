/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:40:55 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 08:33:07 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char    *csrc;
    char    *cdst;
    size_t  i;

    csrc = (char *)src;
    cdst = (char *)dst;
    i = 0;
    if (dst < src)
    {
		while (i < len)
        {
        	cdst[i] = csrc[i];
            i++;
        }
	}
    if (dst > src)
    {
    	while(len > 0)
        {
        	cdst[len - 1] = csrc[len - 1];
        	len--;
        }		
     }
     return (dst);
}
/*
int	main(void)
{
	char dst[10] = "";
	char cdst[10] = "";
	const char src[5] = "zizz";
	const char csrc[5] = "zizz";
	char str[19] = "This is an example";

	
	ft_memmove(dst, src, 0);
	memmove(cdst, csrc, 0);
	printf("%s\n", dst);
	printf("%s\n", cdst);

    ft_memmove(str + 7, str, 10);
	printf("%s\n", str);
}
*/
