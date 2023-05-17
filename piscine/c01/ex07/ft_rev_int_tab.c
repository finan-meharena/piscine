/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 05:17:52 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/16 05:17:52 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		counter;
	char	temp;

	counter = 0;
	while (counter < size - 1)
	{
		temp = tab[size];
		tab[size] = tab[counter];
		tab[counter] = temp;
		counter++;
		size--;
	}
}

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    ft_rev_int_tab(arr, size);

    printf("\nReversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
