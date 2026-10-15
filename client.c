/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakoriko <nakoriko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:45:15 by nakoriko          #+#    #+#             */
/*   Updated: 2024/08/02 15:21:20 by nakoriko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_check(char *pid, char *str)
{
	int	i;

	i = 0;
	while (pid[i])
	{
		if (ft_isdigit(pid[i]) == 0)
		{
			write(1, "PID non valido\n", 16);
			return (0);
		}
		i++;
	}
	if (!str)
	{
		write(1, "String problems\n", 17);
		return (0);
	}
	return (1);
}

void	send_msg(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (((c >> i) & 1) == 0)
		{
			kill(pid, SIGUSR2);
		}
		else
			kill(pid, SIGUSR1);
		i++;
		usleep(500);
	}
}

/*int main()
{
    char c = 'A'; //01000001
    int  i = 0;
    int j;
    while (i < 8)
    {
        j = ((c >> i) & 1);
        printf("Bit %d is %d\n", i, j);
        i++;
    }

}*/

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac == 3)
	{
		if (ft_check(av[1], av[2]) == 0)
			return (0);
		pid = atoi(av[1]);
		if (pid <= 0)
		{
			write(1, "Invalid PID\n", 13);
			return (0);
		}
		while (av[2][i])
		{
			send_msg(pid, av[2][i]);
			i++;
		}
		send_msg(pid, '\n');
		send_msg(pid, '\0');
		return (0);
	}
}
