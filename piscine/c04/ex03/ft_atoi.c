/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:36:23 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 20:36:23 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' &&(str[i] == ' '
		|| str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r'))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
	if (str[i] == '-')
		sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

#include <stdio.h>
#include<stdlib.h>
int main()
{
  char str[] = "    \v   \n   +-+--++-8415a64546";
  printf("%d", ft_atoi(str));
}
