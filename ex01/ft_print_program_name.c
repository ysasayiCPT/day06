/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysasayi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:00:15 by ysasayi           #+#    #+#             */
/*   Updated: 2020/06/25 16:45:44 by ysasayi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void ft_putchar(char *c);
int main(int argc, char *argv[])
{
	ft_putchar(argv[0]); 

}
void ft_putchar(char *c)
{
	int i =0;
	while(c[i] != '\0')
	{
	write(1, &c, 1);
	i++;
	}
}
