/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:39:36 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:39:37 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int main()
{
	char s[] = "ciao";
	ft_bzero(s, 4);
	printf("%p\n", ft_bzero(s, 4));
	printf("%s\n", s);
	return (0);
}*/
