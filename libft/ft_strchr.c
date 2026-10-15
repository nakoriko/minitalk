/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:41:01 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:41:01 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*int main()
{
	char s[] = "teste";
	printf("%p\n", s);
	printf("%p\n", ft_strchr("teste", 'e'+ 256 ));
	printf("%p\n", strchr("teste", 'e' + 256));
	return (0);	
}*/
