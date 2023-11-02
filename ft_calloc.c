/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:57:12 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/30 14:56:40 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
int	main(void)
{
	int *ptr1;
	int *ptr2;
	
	ptr1 = ft_calloc(8539, sizeof(int));
	ptr2 = calloc(8539, sizeof(int));
	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);
	free(ptr1);
	free(ptr2);
}
*/
