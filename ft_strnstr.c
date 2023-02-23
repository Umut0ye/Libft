/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoney <umoney@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:16:17 by umoney            #+#    #+#             */
/*   Updated: 2023/01/24 16:16:17 by umoney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *find, size_t len)
{
	size_t	c;

	if (*find == '\0' || h == find)
		return ((char *)h);
	c = ft_strlen(find);
	while (*h && c <= len--)
	{
		if (!(ft_strncmp((char *)h, (char *)find, c)))
			return ((char *)h);
		h++;
	}
	return (NULL);
}
