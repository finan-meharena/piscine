/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:17:41 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/18 20:17:41 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*
#include <stdio.h>

int main()
{
  	char str[] = "Life is good.";
  	int result = ft_strlen(str);
  	printf("The length of the string is %d.\n", result);
  	return 0;
}
*/
