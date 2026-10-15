/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:41:39 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:41:40 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/
#include "libft.h" 

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	if (n == 0)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
	char s1[] = "0030";
	char s2[] = "0000";
	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n", memcmp(s1, s2, 4));
	return (0);
}*/
