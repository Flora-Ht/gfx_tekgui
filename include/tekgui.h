/*
** tekgui.h for  in /blinux_home/huot_b/rendus/Infographie/gfx_tekgui/include
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Sat Feb 20 16:05:37 2016 Flora Huot
** Last update Sat Feb 20 16:05:37 2016 Flora Huot
*/

#ifndef TEKGUI_H_
# define TEKGUI_H_

# include <lapin.h>

struct s_tekgui;
struct s_widget;

typedef t_bunny_response(*t_action_func)(struct s_tekgui *, struct s_widget *);

typedef struct		s_widget
{
  char			*name;
  char			*type;
  int			x;
  int			y;
  int			width;
  int			height;
  int			child_nb;
  char			**child_name;
  unsigned int		color;
  unsigned int		bg_color;
  t_bunny_pixelarray	*bg_img;
  void			(*draw)(struct s_tekgui *, t_bunny_pixelarray *,
				struct s_widget *);
  void			(*free)(struct s_widget *);
  t_action_func		action;
  void			*data;
  struct s_widget	*child;
  struct s_widget	*next;
}			t_widget;

typedef struct		s_button
{
  char			*text;
  int			pressed;
  char			*action;
}			t_button;

typedef struct		s_checkbox
{
  char			*label;
  int			checked;
  unsigned int		cross_color;
  unsigned int		frame_color;
}			t_checkbox;

typedef struct		s_window
{
  char			*text;
}			t_window;

typedef struct		s_textbox
{
  char			*text;
}			t_textbox;

typedef struct		s_tekgui
{
  t_widget		*first;
  t_widget		*widget;
  t_bunny_pixelarray	*font;
}			t_tekgui;

typedef struct		s_text
{
  char			c;
  char			*str;
  unsigned int		color;
  t_bunny_position	pos;
}			t_text;

typedef	struct		s_data
{
  t_bunny_window	*win;
  t_bunny_pixelarray	*pix;
  t_tekgui		*gui;
}			t_data;

#endif /* !TEKGUI_H_ */
