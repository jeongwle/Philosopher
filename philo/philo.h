/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongwle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:40:12 by jeongwle          #+#    #+#             */
/*   Updated: 2021/06/29 19:08:24 by jeongwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

typedef struct	s_philo
{
	pthread_t		ph;
	int				identifier;
	void			*data;
	pthread_mutex_t fork;
}				t_philo;

typedef struct	s_param
{
	t_philo			*philo;
	int				philo_num;
	int				time_stamp;
	struct timeval	old_time;
}				t_param;

int				ft_atoi(const char *str);
void			ft_usleep(int num);
void			print_status(t_param *param, int param_num, char *str);

#endif
