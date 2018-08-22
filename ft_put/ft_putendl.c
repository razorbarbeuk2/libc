/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RAZOR <RAZOR@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:41:49 by gbourson          #+#    #+#             */
/*   Updated: 2017/08/02 16:08:02 by RAZOR            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putendl(char const *s)
{
	if (!s)
		ft_putstr("NULL");
	else
		ft_putstr(s);
	ft_putchar('\n');
}
