/*
** main.c for lib in /home/huot_b/rendus/Infographie/mylib_lapin
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Tue Dec 15 16:20:14 2015 Flora Huot
** Last update Tue Dec 15 16:20:14 2015 Flora Huot
*/

#include "tekgui_func.h"

int		main(int ac, char **av)
{
  t_data	my_data;

  if (ac == 2)
    {
      if (create_environnment(&my_data, av[1]))
	return (0);
      tekgui_main_loop(&my_data);
      free_environnment(&my_data);
    }
  else
    my_putstr("Usage: ./tekgui <file.ini>\n");
  return (0);
}
