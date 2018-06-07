/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:26:07 by szhuang           #+#    #+#             */
/*   Updated: 2018/05/24 09:26:11 by szhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char *dest;
	dest = (char*) malloc((ft_strlen(src)+1) * sizeof(src[0]));
	dest = ft_strcpy(dest, src); 
	return(dest);

}

int main(void) 
{  
    char *src;
    src = "Golden Global View"; 
    printf("%s",ft_strdup(src)); 
    free(ft_strdup(src)); 
    return 0;  
}  