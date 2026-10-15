/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:14:34 by nakoriko          #+#    #+#             */
/*   Updated: 2024/02/02 16:14:35 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free (lst);
}

void *ft_f(void *content)
{
	int i;
	char *s;
	
	s = strdup(content);
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = 97;
		i++;
	}
	s[i] = '\0';
	return (s);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
	else
		*lst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst -> next))
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}

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

void del(void *content)
{
	free (content);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	temp = *lst;
	while (temp)
	{
		next = temp->next;
		ft_lstdelone(temp, del);
		temp = next;
	}
	*lst = NULL;
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*content;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		newnode = ft_lstnew(content);
		if (newnode == NULL)
		{
			ft_lstclear(&new, del);
			del(content);
		}
		ft_lstadd_back(&new, newnode);
		lst = lst->next;
	}
	return (new);
}

/*int main ()
{
	t_list *nodo;
	//t_list *map;
	
	nodo = ft_lstnew("hello!");
	ft_lstadd_back(&nodo, ft_lstnew("come"));
	ft_lstadd_back(&nodo, ft_lstnew("stai?"));
	
	while (nodo)
	{
		printf("%s\n", (char *)nodo->content);
		nodo = nodo->next;
	}
	map = ft_lstmap(nodo, &ft_f, del); 
	while (map)
	{
		printf("%s\n", (char *)map->content);
		map = map->next;
	}
	//ft_lstclear(&nodo, &del);
	//ft_lstclear(&map, &del);
	return (0); 
}*/
