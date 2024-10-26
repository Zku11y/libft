/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:34:35 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/26 02:57:07 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*int_min_handler(void)
{
	char	*ptr;

	ptr = malloc(12);
	if (ptr == NULL)
		return (NULL);
	ptr = "-2147483648";
	return (ptr);
}

int	size_of_int(int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	if (n == -2147483648)
		return (int_min_handler());
	i = size_of_int(n);
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	ptr[i] = '\0';
	i--;
	while (i >= 0 && ptr[i] != '-')
	{
		ptr[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (ptr);
}
