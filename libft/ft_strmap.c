/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vmulder <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/20 13:35:30 by vmulder       #+#    #+#                 */
/*   Updated: 2019/01/20 14:07:51 by vmulder       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstring;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	nstring = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (nstring == NULL)
		return (NULL);
	while (s[i])
	{
		nstring[i] = f(s[i]);
		i++;
	}
	nstring[i] = '\0';
	return (nstring);
}
