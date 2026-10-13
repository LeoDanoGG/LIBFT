/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legomez <legomez@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:18:40 by legomez           #+#    #+#             */
/*   Updated: 2026/10/05 15:23:49 by legomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (char *) ft_calloc((ft_strlen(src) + 1), sizeof(char));
	if (!c)
		return (NULL);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
