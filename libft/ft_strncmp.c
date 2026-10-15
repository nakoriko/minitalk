/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:41:19 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:41:20 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/
#include "libft.h" 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*int main ()
{
	printf("%d\n", ft_strncmp("abcdef", "abc\375xx", 5));
	printf("%d\n", strncmp("abcdef", "abc\375xx", 5));
	return (0);
}*/
