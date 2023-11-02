/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:58:20 by vsavolai          #+#    #+#             */
/*   Updated: 2023/11/01 13:57:50 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_newsubstr(char const *s, unsigned int start,
size_t len)
{
	char	*sub;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == 0)
		return (0);
	if (s[i] == '\0')
		return (sub);
	while (i < len && s[i] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

static size_t	ft_arrsize(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	if (s[i] == c)
	{
		while (s[i] == c)
			i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j++;
		}
		i++;
		while (s[i + 1] == c)
			i++;
	}
	return (j);
}

static char	**ft_free(char **arr)
{
	size_t j;

	j = 0;
	while (arr[j] == 0)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return(arr);
}

static char	**ft_fillarr(char **arr, const char *s, char c, size_t arrsize)
{
	size_t			i;
	size_t			j;
	unsigned int	k;

	i = 0;
	k = 0;
	while (i < (arrsize))
	{
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k + j] != c && s[k + j] != '\0')
			j++;
		j++;
		arr[i] = ft_newsubstr(s, k, j -1);
			if (arr[i] == 0)
				return (ft_free(arr));	
		k += j - 1;
		i++;
	}
	arr[i - 1] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	arrsize;
	
	arrsize = ft_arrsize(s, c);
	if (arrsize < 2)
		arrsize = 2;
	arr = (char **)malloc(sizeof(char *) * arrsize);
	if (arr == 0)
		return (0);
	if (s[0] == '\0')
		return (arr);
	arr = ft_fillarr(arr, s, c, arrsize);
	return (arr);
}

/*
#include <stdio.h>
int main(void)
{
	char *s = "                  olol";
	char **arr;
	arr = ft_split(s, ' ');

	while (arr != 0)
	{
		printf("%s\n", *arr);
		arr++;
	}
}
*/
