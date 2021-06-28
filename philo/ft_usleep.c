/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:15:41 by jeongwle          #+#    #+#             */
/*   Updated: 2021/06/28 19:11:10 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_usleep(int num)
{
	struct timeval	old_time;
	struct timeval	new_time;
	double			temp;
	int				diff;

	gettimeofday(&old_time, NULL);
	gettimeofday(&new_time, NULL);
	temp = num * 1000;
	diff = 0;
	while (diff < num)
	{
		temp /= 4;
		usleep(temp);
		gettimeofday(&new_time, NULL);
		diff = (new_time.tv_sec - old_time.tv_sec) * 1000 +
				(new_time.tv_usec / 1000 - old_time.tv_usec / 1000);
	}
}
