/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr_chr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 12:48:24 by rnovodra          #+#    #+#             */
/*   Updated: 2018/07/04 12:48:25 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/ft_printf.h"

void		ft_write_chr(t_data *d, int *dest)
{
	if (!dest)
		return ;
	*dest = d->buff_i + d->ret;
}
