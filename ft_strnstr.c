/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:34:06 by zbasol            #+#    #+#             */
/*   Updated: 2023/07/13 18:59:59 by zbasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *x, const char *y, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (y[0] == '\0')
		return ((char *)x);
	while (x[i] != '\0' && i < n)
	{
		if (x[i] == y[j])
		{
			while (x[i + j] == y[j] && i + j < n)
			{
				if (y[j + 1] == '\0')
					return ((char *)x + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
