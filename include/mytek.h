/*
** mytek.h for lib in /home/huot_b/rendus/Infographie/mylib_lapin/include
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Tue Dec 15 16:12:13 2015 Flora Huot
** Last update Tue Dec 15 16:12:13 2015 Flora Huot
*/

#ifndef MYTEK_H_
# define MYTEK_H_

# include <lapin.h>

# define ABS(n) (((n) > 0) ? (n) : (-(n)))

int	my_putstr(const char *str);
void	my_putchar(char c);
void	tekpixel(t_bunny_pixelarray *pix,
		 t_bunny_position *pos,
		 t_color *color);
void	*tekfunction(const char *funcname);
void	tektext(t_bunny_pixelarray *out, const char *str,
		t_bunny_pixelarray *fontpng);

#endif /* !MYTEK_H_ */
