/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:59:08 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/22 19:59:08 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
	{
		return (0);
	}
	while ((i * i) < nb && nb < 46341)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}

// int main() 
// { 
//     printf("%d", ft_sqrt(625)); 
//     return 0; 
// } 