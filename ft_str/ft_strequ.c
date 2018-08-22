/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourson <gbourson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 15:57:22 by gbourson          #+#    #+#             */
/*   Updated: 2016/10/11 16:01:39 by RAZOR            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
			i++;
		if (s1[i] == s2[i])
			return (1);
		else
			return (0);
	}
	return (0);
}
