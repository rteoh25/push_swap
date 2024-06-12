/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:06 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/08 14:09:48 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)str);
	s = (char *)malloc(sizeof(*s) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (i <= len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
