/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:40:39 by jeongwle          #+#    #+#             */
/*   Updated: 2021/06/29 16:45:04 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_status(t_param *param, int param_num, char *str)
{
	struct timeval	new_time;

	gettimeofday(&new_time, NULL);
	param->time_stamp = (new_time.tv_sec - param->old_time.tv_sec) * 1000 +
		(new_time.tv_usec / 1000 - param->old_time.tv_usec / 1000);
	printf("%dms %d %s\n", param->time_stamp, param_num, str);
}
