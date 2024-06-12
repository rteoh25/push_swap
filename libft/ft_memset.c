/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:43:11 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/08 19:02:46 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t len)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)arr;
	while (i < len)
		b[i++] = c;
	return (arr);
}
