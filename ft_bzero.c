/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:58:59 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/27 09:33:50 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	s[5] = "abcd";
	char	t[5] = "abcd";
	int		i;
	
	i = 0;
	ft_bzero(s, 2);
	bzero(t, 2);
	while (i < 5)
	{
		printf("%d\n", s[i]);
		i++;
	}
	i = 0;
	while (i < 5)
		{
 			printf("%d\n", t[i]);
			i++;
		}
}
*/
