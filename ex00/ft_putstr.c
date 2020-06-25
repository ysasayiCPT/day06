/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:53:23 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/25 10:20:50 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void ft_putstr(char *str);

void ft_putstr(char *str)
{
	int i =0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
