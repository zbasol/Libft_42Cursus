/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbasol <zbasol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:18:21 by zbasol            #+#    #+#             */
/*   Updated: 2023/07/14 10:30:02 by zbasol           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret_str;
	size_t	s_len;
	size_t	ret_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s[0] == '\0' || s_len < start)
		return (ft_strdup(""));
	ret_len = 0;
	if (start < s_len)
		ret_len = s_len - start;
	if (ret_len > len)
		ret_len = len;
	ret_str = (char *)malloc(sizeof(char) * (ret_len + 1));
	if (!ret_str)
		return (0);
	ft_strlcpy(ret_str, s + start, ret_len + 1);
	return (ret_str);
}
