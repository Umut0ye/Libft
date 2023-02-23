/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoney <umoney@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:15:36 by umoney            #+#    #+#             */
/*   Updated: 2023/01/24 16:28:11 by umoney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	size_t	len;
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	array = malloc(sizeof(char) * len + 1);
	if (!array)
		return (NULL);
	while (i < len)
	{
		if (i < ft_strlen(s1))
			array[i] = s1[i];
		else
			array[i] = s2[a++];
		i++;
	}
	array[i] = '\0';
	return (array);
}
