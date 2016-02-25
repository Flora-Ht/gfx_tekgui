/*
** main.c for  in /home/huot_b/Tests/gfx_tekgui
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Thu Feb 25 18:35:52 2016 Flora Huot
** Last update Thu Feb 25 18:35:52 2016 Flora Huot
*/

#include "tekgui_func.h"

int		main(int ac, char **av)
{
  t_data	my_data;

  if (ac == 2)
    {
      if (create_environnment(&my_data, av[1]))
	return (0);
      bunny_set_key_response(&key_listener);
      bunny_set_click_response(&click_listener);
      bunny_set_loop_main_function(&main_loop);
      bunny_loop(my_data.win, 60, &my_data);
      free_environnment(&my_data);
    }
  else
    my_putstr("Usage: ./tekgui <file.ini>\n");
  return (0);
}
