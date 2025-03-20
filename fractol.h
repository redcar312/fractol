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

typedef struct t_img
{
	void	*mlx_img;
	char	*pixels;
	int	line_len;
	int bpp;
	int endian;
}	t_img;

typedef struct t_complex_num
{
	double	x_real;
	double	y_imaginary;

}	t_complex_num

typedef struct t_fractal
{
	void	*connection;
	void	*window;
	char	*title;
	double j_x;
	double j_y;
	double	zoom_value;
	t_img img;
}	t_fractal;

double mod2(struct t_fractal *t_fractal fractal);
double	calc_real(struct *t_fractal fractal);
double	calc_imaginary(struct *t_fractal fractal);

#endif
