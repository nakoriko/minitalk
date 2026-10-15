/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:42:25 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:42:26 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	p = malloc(sizeof(char) * i + 1);
	if (p == 0)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main ()
{
	char s[] = "ciao";
	char *p;
	char *p2;
	p = ft_strdup(s);
	p2 = strdup(s);
	printf("%p\n", p);
	printf("%s\n", p);
	printf("%p\n", p2);
	printf("%s\n", p2);
	return (0);
}*/
