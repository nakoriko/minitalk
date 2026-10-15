/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:40:00 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:40:01 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (d <= s)
		ft_memcpy(d, s, n);
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (d);
}
/*int main ()
{
	char dst[] = "ciao";
	char src[] = "1234";
	printf("%p\n", ft_memmove(dst, src, 3));
	printf("%p\n", memmove(dst, src, 3));
}*/
