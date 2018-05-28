/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 05:48:46 by rnovodra          #+#    #+#             */
/*   Updated: 2018/05/08 05:48:47 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/ft_printf.h"

void			ft_c(t_data *d)
{
	va_list		*tmp;
	
	if (d->data_arg != 0)
	{
		ft_get_arg(d, d->data_arg);
		tmp = &d->param_arg;
	}
	else
		tmp = &d->argptr;
	if (d->info.size == 3 || d->info.up_case == 1)
		d->pa_arg.pa_wchar = (wchar_t)va_arg(*tmp, int_least32_t);
	else
		d->pa_arg.pa_wchar = (unsigned char)va_arg(*tmp, int_least32_t);
	ft_printf_putchar(d, d->pa_arg.pa_wchar);
}
