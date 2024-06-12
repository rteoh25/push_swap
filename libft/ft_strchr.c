/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:49:42 by rteoh             #+#    #+#             */
/*   Updated: 2023/10/31 18:46:00 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	char	*b;
	char	c;

	c = (char)character;
	b = (char *)str;
	while (*b != c && *b)
	{
		b++;
	}
	if (*b == c)
		return ((char *)b);
	return (NULL);
}
