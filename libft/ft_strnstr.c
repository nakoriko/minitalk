/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:41:54 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:41:54 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (*little == '\0' || little == NULL)
		return ((char *) big);
	while (big[j] != '\0' && j < len)
	{
		i = 0;
		while (little[i] == big[i + j] && i + j < len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
/*int main ()
{
	char big[] = "aaxx";
	char little[] = "x";
	size_t len = -1;
	printf("%p\n", ft_strnstr(big, little, len));
	//printf("%p\n", big);
	//printf("%s\n", ft_strnstr(big, little, len));
	//printf("%p\n", strnstr(big, little, len));
	return (0);
}*/
