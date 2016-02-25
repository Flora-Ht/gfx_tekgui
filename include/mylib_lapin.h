/*
** mylib_lapin.h for lib in /home/huot_b/rendus/Infographie/mylib_lapin/include
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Tue Dec 15 16:11:04 2015 Flora Huot
** Last update Tue Dec 15 16:11:04 2015 Flora Huot
*/

#ifndef MYLIB_LAPIN_H_
# define MYLIB_LAPIN_H_

# include <lapin.h>

# define WIDTH 1400
# define HEIGHT 900

# define ABS(n) (((n) > 0) ? (n) : (-(n)))

# define COLOR_R(r) ((unsigned int)(r) & 0xFF)
# define COLOR_G(g) (((unsigned int)(g) & 0xFF) << 8)
# define COLOR_B(b) (((unsigned int)(b) & 0xFF) << 16)
# define COLOR_A(a) (((unsigned int)(a) & 0xFF) << 24)
# define RGBA(r, g, b, a) (COLOR_R(r) | COLOR_G(g) | COLOR_B(b) | COLOR_A(a))

void	bg_color(t_bunny_pixelarray *pix, unsigned int color);
void	set_my_pixel(t_bunny_pixelarray *pix, int x,
		     int y, unsigned int color);
void	draw_my_line(t_bunny_pixelarray *pix, t_bunny_position *pos1,
		     t_bunny_position *pos2, unsigned int color);
void	draw_my_circle(t_bunny_pixelarray *pix, t_bunny_position *center,
		       double radius, unsigned int color);

#endif /* !MYLIB_LAPIN_H_ */
