/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:58:44 by fkidane           #+#    #+#             */
/*   Updated: 2023/05/17 19:58:44 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int end;

	i = 0;
	end = 1;
	// while (str[i])
	// {
	// 	if ((str[i] >= '0' && str[i] <= '9') ||
	// 		(str[i] >= 'a' && str[i] <= 'z') ||
	// 		(str[i] >= 'A' && str[i] <= 'Z'))
	// 	{
	// 		if (end && (str[i] >= 'a' && str[i] <= 'z'))
	// 			str[i] -= 32;
	// 		else if (!end && (str[i] >= 'A' && str[i] <= 'Z'))
	// 			str[i] += 32;
	// 		end = 0;
	// 	}
	// 	else
	// 	{
	// 		end = 1;
	// 	}
	// 	i++;
	// }
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(str));
// 	return (0);
// }
