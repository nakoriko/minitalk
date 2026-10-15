/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:42:14 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:42:15 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	else
		ft_bzero(p, nmemb * size);
	return (p);
}

/*int main ()
{
	int i = 5;
	int j = 5;
	printf("%p\n", ft_calloc(5, 5));
	printf("%p\n", calloc(5, 5));
	return (0);
}*/
