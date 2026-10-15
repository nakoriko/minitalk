/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:45:26 by nakoriko          #+#    #+#             */
/*   Updated: 2024/08/02 15:21:18 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int bit)
{
	static int	i = 0;
	static char	c = 0;

	if (bit == SIGUSR1)
	{
		c = c | (1 << i);
	}
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf ("PID: %d\n", pid);
	while (1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}

/*int main ()
{
    int bit_char[] = {1, 0, 0, 0, 0, 1, 1, 0};

    int i = 0;
    while (i <= 8)
    {
        ft_handler(bit_char[i]);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}*/
