/*
** tekgui_func.h for  in /blinux_home/huot_b/rendus/Infographie/gfx_tekgui/include
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Mon Feb 22 16:41:52 2016 Flora Huot
** Last update Mon Feb 22 16:41:52 2016 Flora Huot
*/

#ifndef TEKGUI_FUNC_H_
# define TEKGUI_FUNC_H_

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "my.h"
# include "mylib_lapin.h"
# include "mytek.h"
# include "tekgui.h"

# define NB_TYPES 4

/* FONCTIONS OBLIGATOIRES */
t_tekgui		*tekgui_load(const char *file);
void			tekgui_display(t_bunny_pixelarray *pix,
				       t_tekgui *gui);

/* INIT AND FREE */
int			create_environnment(t_data *my_data, char *file);
t_bunny_response	main_loop(void *data);
unsigned int		get_color_from_str(const char *str);
void			free_environnment(t_data *my_data);
void			tekgui_main_loop(t_data *data);

/* GET INFORMATION FROM INI */
unsigned int		get_right_color(const char *str);

/* DISPLAY TEXT */
unsigned int		get_color(t_bunny_pixelarray *pix, int x, int y);
void			print_char(t_bunny_pixelarray *out,
				   t_bunny_pixelarray *fontpng, char c,
				   t_bunny_position *pos_char);
void			display_text(t_bunny_pixelarray *out,
				     t_bunny_pixelarray *fontpng,
				     t_text *text);
void			display_title(t_bunny_pixelarray *pix,
				      t_bunny_pixelarray *fontpng,
				      t_text *text);

/* DRAW */
int			merge_two_arrays(t_bunny_pixelarray	*src,
					 t_bunny_pixelarray	*dest,
					 t_bunny_position	pos);
void			draw_rectangle(t_bunny_pixelarray *pix,
				       t_bunny_position *pos,
				       t_bunny_position *size,
				       unsigned int color);
void			draw_filled_rectangle(t_bunny_pixelarray *pix,
					      t_bunny_position *pos,
					      t_bunny_position *size,
					      unsigned int color);
void			draw_cross(t_bunny_pixelarray *pix,
				   t_bunny_position *pos,
				   t_bunny_position *size,
				   unsigned int color);

/* WIDGET */
int			check_widget(t_widget *wid);
int			get_children_name(t_widget *wid,
					  t_bunny_ini_scope *scope, int nb);
t_widget		*get_action(t_widget *add, t_bunny_ini_scope *scope);
t_widget		*get_common_info(t_widget *wid, t_bunny_ini *ini,
					  t_bunny_ini_scope *scope);
t_widget		*get_data_from_type(t_widget *add,
					    t_bunny_ini_scope *scope);
t_widget		*load_widget(t_widget *widget, t_bunny_ini *ini,
				     t_bunny_ini_scope *scope);
void			free_widget(t_widget *wid);

/* CHECKBOX */
t_checkbox		*load_checkbox_info(t_bunny_ini_scope *scope);
void			draw_my_checkbox(t_tekgui *gui,
					 t_bunny_pixelarray *pix,
					 t_widget *wid);
void			free_my_checkbox(t_widget *wid);

/* BUTTON */
t_button		*load_button_info(t_bunny_ini_scope *scope);
void			draw_my_button(t_tekgui *gui, t_bunny_pixelarray *pix,
				       t_widget *wid);
void			free_my_button(t_widget *wid);

/* WINDOW */
t_window		*load_window_info(t_bunny_ini_scope *scope);
void			draw_my_window(t_tekgui *gui, t_bunny_pixelarray *pix,
				       t_widget *wid);
void			free_my_window(t_widget *wid);

/* TEXTBOX */
t_textbox		*load_textbox_info(t_bunny_ini_scope *scope);
int			can_user_write(t_widget *wid);
void			draw_my_textbox(t_tekgui *gui, t_bunny_pixelarray *pix,
					t_widget *wid);
void			free_my_textbox(t_widget *wid);

/* MISCELLANEOUS */
int			my_strlen_to_char(char *str, char c);
int			my_is_printable(char c);

/* EVENT */
t_bunny_response	key_listener(t_bunny_event_state state,
				     t_bunny_keysym sym, void *data);
t_bunny_response	click_listener(t_bunny_event_state state,
				       t_bunny_mouse_button button,
				       void *data);
t_bunny_response	text_listener(uint32_t unicode, void *data);

#endif /* !TEKGUI_FUNC_H_ */
