/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:29:35 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/25 06:17:54 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/* int	main(void)
{
	unsigned char	c;
	unsigned char	t;
	unsigned char	y;

	c = '8';
	t = 'u';
	y = '0';
	
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(t));
	printf("%d\n", ft_isdigit(y));
}
*/
