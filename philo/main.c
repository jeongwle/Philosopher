/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:09:54 by jeongwle          #+#    #+#             */
/*   Updated: 2021/06/28 22:12:18 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*take_fork(void *arg)
{
	t_param	*param;

	param = (t_param *)arg;
	int i = 0;
	while (i < param->philo_num)
	{
		printf("%d\n", param->philo[i].identifier);
		i++;
	}
}

void	create_thread(t_param *param)
{
	int	i;

	i = 0;
	while (i < param->philo_num)
	{
		pthread_create(&param->philo[i].ph, NULL, take_fork, (void *)param);
		pthread_join(param->philo[i].ph, NULL);
		i++;
	}
}

void	mutex_init(t_param *param)
{
	int	i;

	i = 0;
	while (i < param->philo_num)
	{
		pthread_mutex_init(&param->philo[i].fork, NULL);
		i++;
	}
}

void	make_philo(t_param *param)
{
	int	i;

	param->philo = (t_philo *)malloc(sizeof(t_philo) * param->philo_num);
	i = 0;
	while (i < param->philo_num)
	{
		param->philo[i].left = 0;
		param->philo[i].right = 0;
		param->philo[i].identifier = i + 1;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_param	param;

	param.philo_num = ft_atoi(argv[1]);
	make_philo(&param);
	mutex_init(&param);
	create_thread(&param);
}
