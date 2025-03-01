/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 19:01:24 by mhurtamo          #+#    #+#             */
/*   Updated: 2025/03/01 19:01:26 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FRACTOL_H
# define FRACTOL_H

#include <unistd.h>
#include <math.h>

typedef t_fractal
{
	double x;
	double y;

}	t_fractal;

double mod2(struct t_fractal *t_fractal fractal);
double	calc_real(struct *t_fractal fractal);
double	calc_imaginary(struct *t_fractal fractal);

#endif
