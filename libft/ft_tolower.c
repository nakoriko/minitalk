/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:40:48 by nakoriko          #+#    #+#             */
/*   Updated: 2024/01/18 13:40:49 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int main()
{
	int c = 'a';
	printf("%d\n", ft_toupper(c));
	return (0);
}*/
