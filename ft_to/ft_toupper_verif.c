/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_verif.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourson <gbourson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:18:01 by gbourson          #+#    #+#             */
/*   Updated: 2016/10/11 16:06:45 by RAZOR            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_toupper_verif(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}