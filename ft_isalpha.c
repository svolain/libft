/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:11:09 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/25 06:16:54 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'Z')
		if (c < 'a' || c > 'z')
			return (0);
	return (1);
}

/*
int	main(void)
{
	int	c;
	int	t;

	c = 'a';
	t = '0';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(t));
	printf("%d\n", isalpha(c));
	printf("%d\n", isalpha(t));
}
*/
