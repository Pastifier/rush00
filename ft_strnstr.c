/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebinjama <ebinjama@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:00:49 by ebinjama          #+#    #+#             */
/*   Updated: 2023/11/04 18:00:50 by ebinjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
	Searches `haystack` for the first occurence of `needle`, and
 	returns a pointer to that address, or NULL if `needle`
  	doesn't exist in `haystack`. If `needle` is empty,
   	a pointer to `haystack` is returned.
 	
  	This function uses ft_strncmp for its implementation, so
  	make sure the inputs are true C strings (see ft_strncmp).
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t haylen)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!(needle[0]))
		return ((char *)haystack);
	while (*haystack && haylen >= needle_len)
	{
		if (*haystack == *needle && !(ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
		haylen--;
	}
	return (NULL);
}
