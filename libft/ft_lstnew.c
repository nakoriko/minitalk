/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:21:06 by nakoriko          #+#    #+#             */
/*   Updated: 2024/02/02 11:21:07 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *)malloc (sizeof(*nodo));
	if (nodo == NULL)
		return (NULL);
	nodo -> content = content;
	nodo -> next = NULL;
	return (nodo);
}
