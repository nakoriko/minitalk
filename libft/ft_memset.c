/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:39:25 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:39:26 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*int main()
{
	char s[] = "103";
	char *p;
	p = ft_memset(s, 'g', 12);
	printf("%p\n", ft_memset(s, 'g', 4));
	printf("%s\n", p);
	return (0);
}*/
