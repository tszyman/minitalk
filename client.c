	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:28:07 by tomek             #+#    #+#             */
/*   Updated: 2024/08/13 23:16:47 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Libft/libft.h"

void	check_args(int argc, char **argv)
{
	int	i;
	
	if (argc != 3)
	{
		ft_printf("Error: run client only with 2 arguments\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (argv[1][i])
	{
		if(!ft_isdigit(argv[1][i++]))
		{
			ft_printf("Error: Invalid PID (non-numeric chars)\n");
			exit(EXIT_FAILURE);
		}
	}
	if (*argv[2] == 0)
	{
		ft_printf("Error: Invalid message (empty) \n");
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv)
{
	//int		pid;
	//char	*str;

	check_args(argc, argv);
	//pid = atoi(argv[1]);
	return (EXIT_SUCCESS);
}