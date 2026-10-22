/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:07:58 by legomez           #+#    #+#             */
/*   Updated: 2026/09/28 10:27:27 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*call;
	unsigned char	*zero;
	size_t			len;

	if (num == 0 || size == 0)
        return malloc(0); 
    if (num > SIZE_MAX / size)
        return malloc(SIZE_MAX); 
	zero = NULL;
	call = malloc(num * size);
	if (call != NULL)
	{
		zero = call;
		len = (num * size);
		while (len-- > 0)
			zero[len] = 0;
	}
	return (zero);
}
