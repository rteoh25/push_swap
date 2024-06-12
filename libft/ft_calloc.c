/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:20:30 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/09 14:34:57 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	if (size != 0 && count >= SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	p = (void *)malloc(total_size);
	if (!p)
	{
		free (p);
		return (NULL);
	}
	if (p)
	{
		ft_memset(p, 0, (total_size));
		return (p);
	}
	return (p);
}
