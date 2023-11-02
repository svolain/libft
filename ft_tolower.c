/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 05:59:41 by vsavolai          #+#    #+#             */
/*   Updated: 2023/10/26 06:28:39 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c < 'A' || c > 'Z')
	{
		return (c);
	}
	return (c + 32);
}

/*
int	main(void)
{
	printf("%c\n", ft_tolower('D'));
	printf("%c\n", ft_tolower('J'));
	printf("%c\n", ft_tolower('K'));
	printf("%c\n", ft_tolower('b'));
	printf("%c\n", ft_tolower('4'));

	printf("%c\n", tolower('D'));
	printf("%c\n", tolower('J'));
	printf("%c\n", tolower('K'));
	printf("%c\n", tolower('b'));
	printf("%c\n", tolower('4'));
}
*/
