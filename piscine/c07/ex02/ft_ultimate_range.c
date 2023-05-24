/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:21:24 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/23 20:21:24 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*pointer;
	int		i;

	i = 0;
	if (min >= max)
	{
		pointer = NULL;
		return (0);
	}
	pointer = malloc(sizeof(int) * (max - min));
	if (!pointer)
		return (-1);
	while (min < max)
	{
		pointer[i] = min;
		i++;
		min++;
	}
	*range = pointer;
	return (i);
}

// int main()
// {
// 	int	*pointer;
// 	printf("%d", ft_ultimate_range(&pointer,7, 17));
// }
