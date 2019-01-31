

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define PLUS '+'
# define MINUS '-'
# define SPACE ' '
# define LATTICE '#'
# define ZERO '0'

#include "libft/includes/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct	s_lists
{
	char		spec;		// спецификатор
	int			len;		// для сохранения выведенных байт
	int			minus;		// сохранения флага '-'
	int			zero;		// сохранения флага '0'
	char		flag[5];
	int 		width;		// сохранение ширины поля
	int         accouracy;	// сохранение точности 
}				t_lists;

int     	ft_printf(const char *argv, ...);
void	    initialize(t_lists *list);
char   	 	*parsing(char *argv, va_list ap, t_lists *list);
char		*ft_flag(char *argv, t_lists *list);
void    	search_flag(char *argv, int len, t_lists *list);
char		*ft_width(char *argv, va_list ap, t_lists *list);
char		*ft_accuracy(char *argv, va_list ap, t_lists *list);
int         data_types(char *argv, va_list ap, t_lists *list);
int			space_amount(t_lists *list, int len);
int			fill_space(int space, char *tmp, int tmp_i, t_lists *list);
void		ft_printf_s(char *str, t_lists *list);
void		ft_print_free(char *str, t_lists *list, int max);
void        ft_printf_c(t_lists *list, va_list ap);
void    	ft_printf_d(t_lists *list, int type);
int         print_c(char *first, char *second, int i);

#endif
