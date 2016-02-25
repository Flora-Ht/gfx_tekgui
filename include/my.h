/*
** my.h for lib in /home/huot_b/rendus/Infographie/mylib_lapin/lib/my
** 
** Made by Flora Huot
** Login   <huot_b@epitech.net>
** 
** Started on  Tue Dec 15 16:17:38 2015 Flora Huot
** Last update Tue Dec 15 16:17:38 2015 Flora Huot
*/

#ifndef MY_H_
# define MY_H_

char		**my_str_to_wordtab(char *str);
char		*my_strcapitalize(char *str);
char		*my_strcat(char *dest, char *src);
char		*my_strcpy(char *dest, char *src);
char		*my_strdup(const char *src);
char		*my_strlowcase(char *str);
char		*my_strncat(char *dest, char *src, int nb);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_strstr(char *s1, char *to_find);
char		*my_strupcase(char *str);
char		*sum_params(int argc, char **argv);
int		my_getnbr(const char *str);
int		my_is_alphanum(char c);
int		my_max(int a, int b);
int		my_power_rec(int nb, int power);
int		my_put_nbr(int nb);
int		my_putnbr_base(int nb, char *base);
int		my_putstr(const char *str);
int		my_show_wordtab(char **tab);
int		my_square_root(int nb);
int		my_strcmp(const char *s1, const char *s2);
int		my_strlen(const char *str);
int		my_swap(int *a, int *b);
unsigned int	my_getnbr_base(const char *str, char *base);
void		my_putchar(char c);
void		my_sort_int_tab(int *tab, int size);

#endif /* !MY_H_ */
